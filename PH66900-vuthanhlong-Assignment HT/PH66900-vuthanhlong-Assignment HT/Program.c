// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kiemTrasonguyen()
{
int x;
    printf("\nNhap so: ");
    if (scanf("%d", &x) != 1) return;

    int laNguyenTo = 1;
    if (x < 2) laNguyenTo = 0;
    else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                laNguyenTo = 0;
                break;
            }
        }
    }
    int can = (int)sqrt(x);
    int laChinhPhuong = (can * can == x);

    printf("Nguyen to: %s\n", laNguyenTo ? "Co" : "Khong");
    printf("Chinh phuong: %s\n", laChinhPhuong ? "Co" : "Khong");
}
void tinhUocvaboi()
{
    system("cls");
    // uoc chung va boi chung
    int a, b;
    // moi nhap
    printf("Moi nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Moi nhap so thu hai: ");
    scanf("%d", &b);
    // tinh toan
    int x = a, y = b;
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    int ucln = x;
    int bcnn = (a * b) / ucln;
    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}
void tinhTienchoquan()
{
    system("cls");
    // khai bao 
    int gioBatdau, gioKetthuc;
    int thoiGian;
    // nhap du lieu
    do
    {
        printf("Gio bat dau vao: ");
        scanf("%d", &gioBatdau);
        printf("Gio ket thuc ra: ");
        scanf("%d", &gioKetthuc);
    } while (gioBatdau < 12 || gioKetthuc > 23 || gioBatdau >= gioKetthuc);
    // tinh toan
    thoiGian = gioKetthuc - gioBatdau;
    if (14 <= gioBatdau && gioBatdau <= 17)
    {
        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 15000 * 9);
        }
        else
        {
            printf("Tien: %d\n", 3 * 15000 * 9 + (thoiGian - 3) * 15000 * 6);
        }
    }
    else
    {
        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 150000);
        }
        else
        {
            printf("Tien: %d\n", 3 * 150000 + (thoiGian - 3) * 15000 * 7);
        }
    }
}
void tinhTiendien()
{
    system("cls");
    // khai bao 
    int soDien;
    // nhap
    printf("Moi nhap so dien: ");
    scanf("%d", &soDien);
    // tinh toan
    if (soDien <= 50)
    {
        printf("So tien: %d \n", soDien * 1678);
    }
    else if (soDien <= 100)
    {
        printf("So tien: %d\n", 50 * 1678 + (soDien - 50) * 1734);
    }
    else if (soDien <= 200)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014);
    }
    else if (soDien <= 300)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536);
    }
    else if (soDien <= 400)
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834);
    }
    else
    {
        printf("So tien: %d\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927);
    }
}
void doiTien()
{
	int tien;
    printf("\nNhap so tien can doi: ");
    scanf("%d", &tien);
    int menhgia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 9; i++) {
        int soTo = tien / menhgia[i];
        if (soTo > 0) {
            printf("%d to %d\n", soTo, menhgia[i]);
        }
        tien = tien % menhgia[i];
    }
}
void tinhLaixuatvaynganhang()
{
    int chon;
    int tien;
    printf("\nNhap so tien can doi: ");
    if (scanf("%d", &tien) != 1) return;
    int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int soTo;
    printf("\nKet qua doi tien:\n");
    for (int i = 0; i < 9; i++) 
    {
        soTo = tien / menhGia[i];
        if (soTo > 0) {
            printf("%d to %d\n", soTo, menhGia[i]);
            tien = tien % menhGia[i];
        }
    }
}
void vayTienmuaxe()
{
    printf("\nNhap so phan tram vay toi da (0-100): ");
    double phanTramVay;
    if (scanf("%lf", &phanTramVay) != 1) return;
    if (phanTramVay < 0 || phanTramVay > 100) {
        printf("Phan tram vay khong hop le!\n");
        return;
    }
    double giaTriXe = 500000000;
    double soTienVay = giaTriXe * (phanTramVay / 100);
    double laiSuatNam = 0.072;
    int thoiHanVayNam = 24;
    int soThangVay = thoiHanVayNam * 12;
    double tongTienPhaiTra = soTienVay * pow((1 + laiSuatNam), thoiHanVayNam);
    double tienTraHangThang = tongTienPhaiTra / soThangVay;
    double tienTraLanDau = tienTraHangThang;
    printf("So tien phai tra lan dau: %.2lf VND\n", tienTraLanDau);
    printf("So tien phai tra hang thang: %.2lf VND\n", tienTraHangThang);
}
void sapxepThongtin()
{
    printf("\nNhap ho ten sinh vien (Ko Dau): ");
    char hoTen[100];
    getchar();
    fgets(hoTen, sizeof(hoTen), stdin);
    printf("Nhap diem sinh vien (1-10): ");
    double diem;
    if (scanf("%lf", &diem) != 1) return;
    const char* hocLuc;
    if (diem >= 9.0)
        hocLuc = "Xuat sac";
    else if (diem >= 8.0)
        hocLuc = "Gioi";
    else if (diem >= 6.5)
        hocLuc = "Kha";
    else if (diem >= 5.0)
        hocLuc = "Trung binh";
    else
        hocLuc = "Yeu";
    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", hoTen);
    printf("Diem: %.2lf\n", diem);
    printf("Hoc luc: %s\n", hocLuc);
}
void xayDunggame()
{
    printf("\nNhap so ban chon (01-15): ");
    int soBanChon;
    if (scanf("%d", &soBanChon) != 1) return;
    if (soBanChon < 1 || soBanChon > 15) {
        printf("So khong hop le!\n");
        return;
    }
    srand((unsigned int)time(NULL));
    int soXo = rand() % 15 + 1;
    printf("So xo: %02d\n", soXo);
    if (soBanChon == soXo) {
        printf("Chuc mung ban da trung giai nhat!\n");
    }
    else {
        printf("Chuc ban may man lan sau!\n");
    }

}
void chuongTrinhtinhtoanphanso()
{
    printf("\nNhap phan so thu nhat (a/b): ");
    int a1, b1;
    char slash1;
    if (scanf("%d %c %d", &a1, &slash1, &b1) != 3 || slash1 != '/' || b1 == 0) {
        printf("Phan so khong hop le!\n");
        return;
    }
    printf("Nhap phan so thu hai (c/d): ");
    int a2, b2;
    char slash2;
    if (scanf("%d %c %d", &a2, &slash2, &b2) != 3 || slash2 != '/' || b2 == 0) {
        printf("Phan so khong hop le!\n");
        return;
    }
    // Tong
    int tuTong = a1 * b2 + a2 * b1;
    int mauTong = b1 * b2;
    printf("Tong: %d/%d\n", tuTong, mauTong);
    // Hieu
    int tuHieu = a1 * b2 - a2 * b1;
    int mauHieu = b1 * b2;
    printf("Hieu: %d/%d\n", tuHieu, mauHieu);
    // Tich
    int tuTich = a1 * a2;
    int mauTich = b1 * b2;
    printf("Tich: %d/%d\n", tuTich, mauTich);
    // Thuong
    if (a2 == 0) {
        printf("Khong the chia cho phan so 0!\n");
    }
    else {
        int tuThuong = a1 * b2;
        int mauThuong = b1 * a2;
        printf("Thuong: %d/%d\n", tuThuong, mauThuong);
    }
}
int main()
{
    // khai bao
    int chon;
    // tao bang
    do
    {
        system("cls");
        printf("Bang Menu\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin nhan vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat!!!\n");
        // Chon CN
        printf("Moi chon chuc nang: ");
        scanf("%d", &chon);
        // Thuc hien CN
        while (1)
        {

            switch (chon)
            {
            case 1:
                kiemTrasonguyen();
                break;
            case 2:
                tinhUocvaboi();
                break;
            case 3:
                tinhTienchoquan();
                break;
            case 4:
                tinhTiendien();
                break;
            case 5:
                doiTien();
                break;
            case 6:
                tinhLaixuatvaynganhang();
                break;
            case 7:
                vayTienmuaxe();
                break;
            case 8:
                sapxepThongtin();
                break;
            case 9:
                xayDunggame();
                break;
            case 10:
                chuongTrinhtinhtoanphanso();
                break;
            case 0:
            {
                printf("--Thoat--!");
                exit(0);
                break;
            }
            default:
            {
                printf("Ban nhap sai. Xin vui long nhap lai tu [1-10]!!!");
                break;
            }
            system("pause");

            }
            printf("Ban co muon thuc hien lai cn khong 1 = co || khac = khong: ");
            int i;
            scanf("%d", &i);
            if (i != 1)
            {
                break;
            }
        }
        // hoi nguoi dung muon tiep tuc khong
        int tiepTuc;
        printf("Ban có muon tiep tuc khong? 1 = co || khac = khong\n ");
        printf("Lua chon: ");
        scanf("%d", &tiepTuc);
        // dieu kien
        if (tiepTuc != 1)
        {
            printf("Cam on ban da su dung chuong trinh!\n");
           break;
        }
    } while (chon != 0);

    return(0);
}


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184
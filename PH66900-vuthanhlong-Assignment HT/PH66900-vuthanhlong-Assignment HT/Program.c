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
    int gioBatdau, gioKetthuc;
    int thoiGian;
    do
    {
        printf("Gio bat dau vao: ");
        scanf("%d", &gioBatdau);
        printf("Gio ket thuc ra: ");
        scanf("%d", &gioKetthuc);
    } while (gioBatdau < 12 || gioKetthuc > 23 || gioBatdau >= gioKetthuc);

    thoiGian = gioKetthuc - gioBatdau;

    if (14 <= gioBatdau && gioBatdau <= 17)
    {
        // GIAM 30% ? 15000 * 0.7 = 10500
        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 10500);
        }
        else
        {
            printf("Tien: %d\n", 3 * 10500 + (thoiGian - 3) * 15000);
        }

    }
    else
    {
        // GIA GOC 15000
        if (thoiGian <= 3)
        {
            printf("Tien: %d\n", thoiGian * 15000);
        }
        else
        {
            // TU GIO THU 4 GIAM 30% ? 10500
            printf("Tien: %d\n", 3 * 15000 + (thoiGian - 3) * 10500);
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
    system("cls");
    // khai bao
    double tienVay, laiSuat = 0.05;
    // moi nhap
    printf("Moi nhap so tien can vay: ");
    scanf("%lf", &tienVay);
    // tinh tien vay
    double tienLai;
    double gocPhaitra = tienVay / 12;
    double soTiencantra;
    double soTiencondu = tienVay;
    printf("Lai xuat vay ngan hang: %lf\n", laiSuat);
    printf("ky han - lai phai tra - goc phai tra - so tien phai tra - so tien con lai\n");
    for (int i = 1; i <= 12; i++)
    {
        tienLai = soTiencondu * laiSuat;
        soTiencantra = gocPhaitra + tienLai;
        soTiencondu = soTiencondu - gocPhaitra;
        printf("%d - %.2lf - %.2lf - %.2lf - %.2lf\n", i, tienLai, gocPhaitra, soTiencantra, soTiencondu);
    }
    return;
}
void vayTienmuaxe()
{
    system("cls");
    double phanTram;
    printf("Nhap phan tram vay toi da (0-100): ");
    scanf("%lf", &phanTram);
    if (phanTram < 0 || phanTram > 100) {
        printf("Phan tram khong hop le!\n");
        return;
    }
    double giaXe = 500000000;
    double tienVay = giaXe * (phanTram / 100.0);
    double laiNam = 0.072;
    double laiThang = laiNam / 12.0;
    int soThang = 24; // CHI 24 THANG
    double goc = tienVay / soThang;

    printf("Tien tra theo tung thang:\n");
    for (int i = 1; i <= soThang; i++) 
    {
        double lai = tienVay * laiThang;
        double phaiTra = goc + lai;
        printf("Thang %d: %.0lf VND\n", i, phaiTra);
        tienVay -= goc;
    }
}
void sapxepThongtin()
{
    system("cls");
    // khai bao
    printf("Nhap ho ten sinh vien (Ko Dau): ");
    char hoTen[100];
    getchar();
    fgets(hoTen, sizeof(hoTen), stdin);// chuoi van ban
    // moi nhap diem
    printf("Nhap diem sinh vien (1-10): ");
    double diem;
    // xep hoc luc
    if (scanf("%lf", &diem) != 1) return;
    const char* hocLuc;
    if (diem >= 9.0)
    {
        hocLuc = "Xuat sac";
    }
    else if (diem >= 8.0)
    {
        hocLuc = "Gioi";
    }
    else if (diem >= 6.5)
    {
        hocLuc = "Kha";
    }
    else if (diem >= 5.0)
    {
        hocLuc = "Trung binh";
    }
    else
    {
        hocLuc = "Yeu";
    }
    // in ket qua
    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", hoTen);
    printf("Diem: %.2lf\n", diem);
    printf("Hoc luc: %s\n", hocLuc);
    return;
}
void xayDunggame()
{
    system("cls");

    int so1, so2;
    printf("Nhap so thu 1 (1-15): ");
    scanf("%d", &so1);
    printf("Nhap so thu 2 (1-15): ");
    scanf("%d", &so2);

    if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
        printf("So khong hop le!\n");
        return;
    }
    int g1 = rand() % 15 + 1;
    int g2 = rand() % 15 + 1;
    printf("So xo: %02d - %02d\n", g1, g2);
    int trung = 0;
    if (so1 == g1 || so1 == g2) trung++;
    if (so2 == g1 || so2 == g2) trung++;
    if (trung == 2) printf("Chuc mung! Ban trung giai nhat!\n");
    else if (trung == 1) printf("Ban trung giai nhi!\n");
    else printf("Chuc ban may man lan sau!\n");
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
    int chon;
    srand(time(NULL));
    do 
    {
        system("cls");
        printf("MENU CHUONG TRINH\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang (12 thang)\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1: kiemTrasonguyen(); break;
        case 2: tinhUocvaboi(); break;
        case 3: tinhTienchoquan(); break;
        case 4: tinhTiendien(); break;
        case 5: doiTien(); break;
        case 6: tinhLaixuatvaynganhang(); break;
        case 7: vayTienmuaxe(); break;
        case 8: sapxepThongtin(); break;
        case 9: xayDunggame(); break;
        case 10: chuongTrinhtinhtoanphanso(); break;
        case 0:
            printf("Cam on ban da su dung chuong trinh!\n");
            return 0;
        default:
            printf("Lua chon khong hop le!\n");
        }
        printf("\nNhan phim bat ky de quay lai menu...");
        system("pause");

    } while (chon != 0);

    return 0;
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
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void soNguyen() {
    float x;
    printf("\nMoi ban nhap mot so bat ky: ");
    scanf("%f", &x);
    if (x == (int) x) {
        printf("\n%.1f la so nguyen", x);
    } else {
        printf("\n%.1f khong phai la so nguyen", x);
    }
}
//----------------------------------------------------------------------------------------------------------------------------
int UCLN(int x, int y) {
    int giaSo;
    while (y != 0) {
        giaSo = y;
        y = x % y;
        x = giaSo;
    }
    return x;
}

int BCNN(int x, int y) {
    return (x * y) / UCLN(x, y);
}

void uocBoi() {
    int x, y;
    printf("nhap so thu nhat: ");
    scanf("%d", &x);
    printf("nhap so thu hai: ");
    scanf("%d", &y);

    int mainUCLN = UCLN(x, y);
    int mainBCNN = BCNN(x, y);

    printf("uoc so chung lon nhat cua %d va %d la %d\n", x, y, mainUCLN);
    printf("boi so chung nho nhat cua %d va %d la %d\n", x, y, mainBCNN);
}
//----------------------------------------------------------------------------------------------------------------------------
void karaoke() {
  float gio_bat_dau, gio_ket_thuc;

    do {
        printf("Nhap gio bat dau: ");
        scanf("%f", &gio_bat_dau);
        printf("Nhap gio ket thuc: ");
        scanf("%f", &gio_ket_thuc);

        if (gio_bat_dau < 12 || gio_ket_thuc > 23) {
            printf("Gio bat dau phai tu 12h va den 23h.\n");
        }
    } while (gio_bat_dau < 12 || gio_ket_thuc > 23);

    float so_gio_su_dung = gio_ket_thuc - gio_bat_dau;
    float gia_tien = 150000;
    if (so_gio_su_dung <=3) {
        gia_tien = gia_tien * so_gio_su_dung;
    } else if (so_gio_su_dung > 3) {
        gia_tien += 0.7 * gia_tien * (so_gio_su_dung - 3);
    }

    if (gio_bat_dau >= 14 && gio_bat_dau <= 17) {
        gia_tien *= 0.9;
    }

    printf("hoa don thanh toan la: %.2f VND\n", gia_tien);
}
//----------------------------------------------------------------------------------------------------------------------------
void tienDien() {
    const float bat1 = 1.678;
    const float bat2 = 1.734;
    const float bat3 = 2.014;
    const float bat4 = 2.536;
    const float bat5 = 2.834;
    const float bat6 = 2.927;
float kwh;
printf("nhap so kWh su dung; ");
scanf("%f", &kwh);
float soTien;
if (kwh <= 50){
    soTien = kwh * bat1;
} else if ( kwh <= 100) {
    soTien = kwh * bat2;
} else if ( kwh <= 200) {
    soTien = kwh * bat3;
} else if ( kwh <= 300) {
    soTien = kwh * bat4;
} else if ( kwh <= 400){
    soTien = kwh * bat5;
} else {
    soTien = kwh * bat6;
}
printf ("So tien ban phai tra la: %.2f dong\n", soTien);
}
//----------------------------------------------------------------------------------------------------------------------------
void doiTien() {
    int a[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int tien;
    printf("Nhap so tien muon doi: ");
    scanf("%d", &tien);
    int i = 0, j = 0, soto;

    printf("Doi to tien menh gia %d nhu sau: \n", tien);
    while (tien != 0 && j < sizeof(a) / sizeof(a[0])) {
        soto = tien / a[j];
        tien %= a[j];
        if (soto > 0)
            printf("Co %d to menh gia %d\n", soto, a[j]);
        j++;
    }
}

//----------------------------------------------------------------------------------------------------------------------------
void laisuat(int tienvay){
	int tienlai;
	int tiengoc = tienvay/12;
	int tientra;
	int tiencon;
	tiencon = tienvay;
	printf("Ky han | Lai phai tra |Goc phai tra | So tien phai tra | So tien con lai|\n");
	for(int i = 1;i <=12; i++){
		tienlai = tiencon * 0.05;
		tientra = tiengoc + tienlai;
		tiencon = tiencon - tiengoc;
		printf("------------------------------------------------------------------------\n");
		printf("%6d |",i);
		printf("%12d |", tienlai);
		printf("%12d |", tiengoc);
		printf("%16d |", tientra);
		printf("%15d |", tiencon);
		printf("\n");
	}
}
void laiSuat() {
	int tienvay;
    printf("nhap so tien muon vay: ");
    scanf("%d",&tienvay);
    printf("Bang lai suat vay ngan hang\n \n");
	laisuat(tienvay);
}
//----------------------------------------------------------------------------------------------------------------------------
void vayTien() {

}
//----------------------------------------------------------------------------------------------------------------------------
void thongTin() {

}
//----------------------------------------------------------------------------------------------------------------------------
void gameLord() {

}
//----------------------------------------------------------------------------------------------------------------------------
void phanSo() {

}
int main() {
    int n;
    do {
        printf("\n<============================================================================>\n");
        printf("Chuc nang 1: Kiem tra so nguyen\n");
        printf("Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
        printf("Chuc nang 3: Chuong trinh tinh tien cho quan Karaoke\n");
        printf("Chuc nang 4: Tinh tien dien\n");
        printf("Chuc nang 5: Chuc nang doi tien\n");
        printf("Chuc nang 6: Xay dung chuc nang tinh lai xuat vay ngan hang tra gop\n");
        printf("Chuc nang 7: Xay dung chuong trinh vay tien mua xe\n");
        printf("Chuc nang 8: Sap xep thong tin sinh vien\n");
        printf("Chuc nang 9: Xay dung game FPOLY-LOTT (2/15)\n");
        printf("Chuc nang 10: Xay dung chuong trinh tinh toan phan so\n");
        printf("*Nhan 0 de thoat chuong trinh*\n");
        printf("<=============================================================================>\n");
        printf("Nhap so tu 1-10 de chon chuc nang\n");
        printf("Vui long chon chuc nang:");
        scanf("%d", &n);
        switch (n) {
            case 0: {
                return 0;
                break;
            }
            case 1: {
                soNguyen();
                break;
            }
            case 2: {
                uocBoi();
                break;
            }
            case 3: {
                karaoke();
                break;
            }
            case 4: {
                tienDien();
                break;
            }
            case 5: {
                doiTien();
                break;
            }
            case 6: {
                laiSuat();
                break;
            }
            case 7: {
                vayTien();
                break;
            }
            case 8: {
                thongTin();
                break;
            }
            case 9: {
                gameLord();
                break;
            }
            case 10: {
                phanSo();
                break;
            }
            default: {
                printf("Vui long nhap so tu 1 - 10 tren menu:");
            }
        }
    } while (n != 10);
}

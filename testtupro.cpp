#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

double test = 40;
double test1 = 85;
double rendah1 = 0;
double rendah2 = 0;
double sedang1 = 0;
double sedang2 = 0;
double tinggi1 = 0;
double tinggi2 = 0;
double ya = 10;
double tidak = 10;

int main() {
    cout << test << endl;
    if (test <= 25) {
        rendah1 = 1;
    }
    else if (test < 50) {
        rendah1 = (50 - test) * 4 / 100;
        sedang1 = (test - 25) * 4 / 100;
    }
    else if (test < 75) {
        tinggi1 = (test - 50) * 4 / 100;
        sedang1 = (75 - test) * 4 / 100;
    }
    else if (test <= 100) {
        tinggi1 = 1.0;
    }

    cout << test1 << endl;

    if (test1 <= 25) {
        rendah2 = 1.0;
    }
    else if (test1 < 50) {
        rendah2 = (50.0 - test1) * 4 / 100;
        sedang2 = (test1 - 25) * 4 / 100;
    }
    else if (test1 < 75) {
        tinggi2 = (test1 - 50) * 4 / 100;
        cout << tinggi2;
        sedang2 = (75 - test1) * 4 / 100;
        cout << sedang2;
    }
    else if (test1 <= 100) {
        tinggi2 = 1.0;
    }

    cout << endl;
    cout << "Emosi = 1" << endl;
    cout << "rendah = " << rendah1 << endl;
    cout << "sedang = " << sedang1 << endl;
    cout << "tinggi = " << tinggi1 << endl;
    cout << endl;
    cout << "Provokasi" << endl;
    cout << "rendah = " << rendah2 << endl;
    cout << "sedang = " << sedang2 << endl;
    cout << "tinggi = " << tinggi2 << endl;
    cout << endl;

    if (rendah1 > 0) {
        if (rendah2 > 0) {
            if (rendah1 < rendah2) {
                tidak = rendah1;
            }
            else {
                tidak = rendah2;
            }
        }
        if (sedang2 > 0) {
            if (tidak > sedang2) {
                tidak = sedang2;
            }
        }
        if (tinggi2 > 0) {
            if (tinggi2 < rendah1) {
                ya = tinggi2;
            }
            else {
                ya = rendah1;
            }
        }
    }

    if (sedang1 > 0) {
        if (rendah2 > 0) {
            if (sedang1 < rendah2) {
                tidak = sedang1;
            }
            else {
                tidak = rendah2;
            }
        }
        if (sedang2 > 0) {
            if (tidak > sedang2) {
                tidak = sedang2;
            }
        }
        if (tinggi2 > 0) {
            if (tinggi2 < sedang1) {
                ya = tinggi2;
            }
            else {
                ya = sedang1;
            }
        }
    }

    if (tinggi1 > 0) {
        if (rendah2 > 0) {
            if (tinggi1 < rendah2) {
                tidak = tinggi1;
            }
            else {
                tidak = rendah2;
            }
        }
        if (sedang2 > 0) {
            if (sedang2 < tinggi1) {
                ya = sedang2;
            }
            else {
                ya = tinggi1;
            }
        }
        if (tinggi2 > 0) {
            if (ya > tinggi2) {
                ya = tinggi2;
            }
        }
    }

    if (ya > 1) {
        ya = 0;
    }
    if (tidak > 1) {
        tidak = 0;
    }

    cout << "ya = " << ya << endl;
    cout << "tidak = " << tidak << endl;

    if (ya < tidak * 3) {
        cout << "tidak" << endl;
    }
    else {
        cout << "ya" << endl;
    }
}


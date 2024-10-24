#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



class Projekt {
private:
    string Sifra;
    string Naziv;
    int Broj_sudionika;
    string Rok_izrade;
    double Cijena;

public:
    Projekt ()
    {
        Sifra.clear();
        Naziv.clear();
        Broj_sudionika=0;
        Rok_izrade.clear();
        Cijena=0;
    }

    void set_Sifra (string nova_Sifra)
    {
        Sifra=nova_Sifra;
    }

    void set_Naziv (string novi_Naziv)
    {
        Naziv=novi_Naziv;
    }

    void set_Rok_izrade (string novi_Rok_izrade)
    {
        Rok_izrade=novi_Rok_izrade;
    }

    string get_Sifra() {return Sifra;}
    string get_Naziv() {return Naziv;}
    string get_Rok_izrade() {return Rok_izrade;}

    void Unos_Projekta()
    {
        ofstream file ("projekt.txt" , ios::app);
        cout << " " << endl;
        cout << "Unos podataka o projektu: " << endl;
        cout << "--------------------------" << endl;
        cout << "Unesite sifru projekta: " << endl;
        cin >> Sifra;
        file << "Podatci o projektu: " << endl;
        file << "--------------------" << endl;
        file << "Sifra projekta: " << Sifra << endl;
        cout << "Unesite naziv projekta: " << endl;
        cin >> Naziv;
        file << "Naziv projekta: " << Naziv << endl;
        cout << "Unesite broj sudionika: " << endl;
        cin >> Broj_sudionika;
        file << "Broj sudionika: " << Broj_sudionika << endl;
        cout << "Unesite rok izrade: " << endl;
        cin >> Rok_izrade;
        file << "Rok izrade: " << Rok_izrade << endl;
        cout << "Unesite cijenu projekta: " << endl;
        cin >> Cijena;
        file << "Cijena: " << Cijena << endl;
        file << " " << endl;
        cout << " " << endl;

    }

    void Ispis_Projekta()
    {
        cout << " " << endl;
        cout << "Podatci o projektu: " << endl;
        cout << "--------------------" << endl;
        cout << "Sifra projekta: " << get_Sifra() << endl;
        cout << "Naziv projekta: " << get_Naziv() << endl;
        cout << "Broj sudionika: " << Broj_sudionika << endl;
        cout << "Rok izrade: " << get_Rok_izrade() << endl;
        cout << "Cijena: " << Cijena << endl;
        cout << " " << endl;
    }
};

class Dizajn {

protected:
    string Ime_dizajna;
    string Ime_dizajnera;
    string Prezime_dizajnera;
    string Projekt_kojem_pripada;

public:
    Dizajn()
    {
        Ime_dizajna.clear();
        Ime_dizajnera.clear();
        Prezime_dizajnera.clear();
        Projekt_kojem_pripada.clear();
    }

    void set_Ime_dizajna(string novo_Ime_dizajna)
    {
        Ime_dizajna = novo_Ime_dizajna;
    }

    void set_Ime_dizajnera(string novo_Ime_dizajnera)
    {
        Ime_dizajnera = novo_Ime_dizajnera;
    }

    void set_Prezime_dizajnera(string novo_Prezime_dizajnera)
    {
        Prezime_dizajnera = novo_Prezime_dizajnera;
    }

    void set_Projekt_kojem_pripada(string novi_Projekt_kojem_pripada)
    {
        Projekt_kojem_pripada = novi_Projekt_kojem_pripada;
    }

    string get_Ime_dizajna() {return Ime_dizajna;}
    string get_Ime_dizajnera() {return Ime_dizajnera;}
    string get_Prezime_dizajnera() {return Prezime_dizajnera;}
    string get_Projekt_kojem_pripada() {return Projekt_kojem_pripada;}

    void Unos_Dizajna()
    {
        ofstream file2 ("dizajn.txt" , ios::app);
        cout << " " << endl;
        cout << "Unos podataka o dizajnu: " << endl;
        cout << "-------------------------" << endl;
        cout << "Ime dizajna: " << endl;
        cin >> Ime_dizajna;
        file2 << "Podatci o dizajnu: " << endl;
        file2 << "-------------------" << endl;
        file2 << "Ime dizajna: " << Ime_dizajna << endl;
        cout << "Ime dizajnera: " << endl;
        cin >> Ime_dizajnera;
        file2 << "Ime dizajnera: " << Ime_dizajnera << endl;
        cout << "Prezime dizajnera: " << endl;
        cin >> Prezime_dizajnera;
        file2 << "Prezime dizajnera: " << Prezime_dizajnera << endl;
        file2 << " " << endl;
        cout << " " << endl;
    }

    void Ispis_Dizajna()
    {
        cout << " " << endl;
        cout << "Podatci o dizajnu: " << endl;
        cout << "-------------------" << endl;
        cout << "Ime dizajna: " << get_Ime_dizajna() << endl;
        cout << "Ime dizajnera: " << get_Ime_dizajnera() << endl;
        cout << "Prezime dizajnera: " << get_Prezime_dizajnera() << endl;
        cout << " " << endl;
    }

};

class Lik :public Dizajn{

protected:
    string Sifra_lika;
    string Uloga_lika;
    string Ime_glumca;
    string Prezime_glumca;

public:
    Lik()
    {
        Sifra_lika.clear();
        Uloga_lika.clear();
        Ime_glumca.clear();
        Prezime_glumca.clear();
    }

    void Unos_Lika()
    {
        ofstream file2 ("dizajn.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o liku: " << endl;
        cout << "------------------------" << endl;
        cout << "Sifra lika: " << endl;
        cin >> Sifra_lika;
        file2 << "Podatci o liku: " << endl;
        file2 << "----------------" << endl;
        file2 << "Sifra lika: " << Sifra_lika << endl;
        cout << "Ime lika: " << endl;
        cin >> Ime_dizajna;
        file2 << "Ime lika: " << Ime_dizajna << endl;
        cout << "Uloga lika: " << endl;
        cin >> Uloga_lika;
        file2 << "Uloga lika: " << Uloga_lika << endl;
        cout << "Ime glumca: " << endl;
        cin >> Ime_glumca;
        file2 << "Ime glumca: " << Ime_glumca << endl;
        cout << "Prezime glumca: " << endl;
        cin >> Prezime_glumca;
        file2 << "Prezime glumca: " << Prezime_glumca << endl;
        cout << "Ime dizajnera: " << endl;
        cin >> Ime_dizajnera;
        file2 << "Ime dizajnera: " << Ime_dizajnera << endl;
        cout << "Prezime dizajnera: " << endl;
        cin >> Prezime_dizajnera;
        file2 << "Prezime dizajnera: " << Prezime_dizajnera << endl;
        cout << "Projekt kojem pripada: " << endl;
        cin >> Projekt_kojem_pripada;
        file2 << "Projekt kojem pripada: " << Projekt_kojem_pripada << endl;
        file2 << " " << endl;
        cout << " " << endl;

        set_Ime_dizajna(Ime_dizajna);
        set_Ime_dizajnera(Ime_dizajnera);
        set_Prezime_dizajnera(Prezime_dizajnera);
        set_Projekt_kojem_pripada(Projekt_kojem_pripada);

    }

    string get_Sifra_lika() {return Sifra_lika;}
    string get_Uloga_lika() {return Uloga_lika;}
    string get_Ime_glumca() {return Ime_glumca;}
    string get_Prezime_glumca() {return Prezime_glumca;}

    void Ispis_Lika()
    {
        cout << " " << endl;
        cout << "Podatci o liku: " << endl;
        cout << "----------------" << endl;
        cout << "Sifra lika: " << get_Sifra_lika() << endl;
        cout << "Ime lika: " << get_Ime_dizajna() << endl;
        cout << "Uloga lika: " << get_Uloga_lika() << endl;
        cout << "Ime glumca: " << get_Ime_glumca() << endl;
        cout << "Prezime glumca: " << get_Prezime_glumca() << endl;
        cout << "Ime dizajnera: " << get_Ime_dizajnera() << endl;
        cout << "Prezime dizajnera: " << get_Prezime_dizajnera() << endl;
        cout << "Projekt kojem pripada: " << get_Projekt_kojem_pripada() << endl;
        cout << " " << endl;
    }

};

class Lokacija :public Dizajn{

protected:
    string Sifra_lokacije;
    string Vrsta_lokacije;

public:
    Lokacija()
    {
        Sifra_lokacije.clear();
        Vrsta_lokacije.clear();
    }

    void Unos_Lokacije()
    {
        ofstream file2 ("dizajn.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o lokaciji: " << endl;
        cout << "----------------------------" << endl;
        cout << "Sifra lokacije: " << endl;
        cin >> Sifra_lokacije;
        file2 << "Podatci o lokaciji: " << endl;
        file2 << "--------------------" << endl;
        file2 << "Sifra lokacije: " << Sifra_lokacije << endl;
        cout << "Naziv lokacije: " << endl;
        cin >> Ime_dizajna;
        file2 << "Ime dizajna: " << Ime_dizajna << endl;
        cout << "Vrsta lokacije: " << endl;
        cin >> Vrsta_lokacije;
        file2 << "Vrsta lokacije: " << Vrsta_lokacije << endl;
        cout << "Ime dizajnera: " << endl;
        cin >> Ime_dizajnera;
        file2 << "Ime dizajnera: " << Ime_dizajnera << endl;
        cout << "Prezime dizajnera: " << endl;
        cin >> Prezime_dizajnera;
        file2 << "Prezime dizajnera: " << Prezime_dizajnera << endl;
        cout << "Projekt kojem pripada: " << endl;
        cin >> Projekt_kojem_pripada;
        file2 << "Projekt kojem pripada: " << Projekt_kojem_pripada << endl;
        file2 << " " << endl;
        cout << " " << endl;

        set_Ime_dizajna(Ime_dizajna);
        set_Ime_dizajnera(Ime_dizajnera);
        set_Prezime_dizajnera(Prezime_dizajnera);
        set_Projekt_kojem_pripada(Projekt_kojem_pripada);
    }

    string get_Sifra_lokacije() {return Sifra_lokacije;}
    string get_Vrsta_lokacije() {return Vrsta_lokacije;}

    void Ispis_Lokacije()
    {
        cout << " " << endl;
        cout << "Podatci o lokaciji: " << endl;
        cout << "--------------------" << endl;
        cout << "Sifra lokacije: " << get_Sifra_lokacije() << endl;
        cout << "Ime lokacije: " << get_Ime_dizajna() << endl;
        cout << "Vrsta lokacije: " << get_Vrsta_lokacije() << endl;
        cout << "Ime dizajnera: " << get_Ime_dizajnera() << endl;
        cout << "Prezime dizajnera: " << get_Prezime_dizajnera() << endl;
        cout << "Projekt kojem pripada: " << get_Projekt_kojem_pripada() << endl;
        cout << " " << endl;
    }

};

class PromotivniMaterijali :public Dizajn{

protected:
    string Sifra_materijala;
    string Vrsta_materijala;

public:
    PromotivniMaterijali()
    {
        Sifra_materijala.clear();
        Vrsta_materijala.clear();
    }

    void Unos_Promotivnih_materijala()
    {
        ofstream file2 ("dizajn.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o promotivnom materijalu: " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Sifra promotivnog materijala: " << endl;
        cin >> Sifra_materijala;
        file2 << "Podatci o promotivnom materijalu: " << endl;
        file2 << "----------------------------------" << endl;
        file2 << "Sifra promotivnog materijala: " << Sifra_materijala << endl;
        cout << "Unesite naziv promotivnog materijala: " << endl;
        cin >> Ime_dizajna;
        file2 << "Ime dizajna: " << Ime_dizajna << endl;
        cout << "Unesite vrstu promotivnog materijala: " << endl;
        cin >> Vrsta_materijala;
        file2 << "Vrsta promotivnog materijala: " << Vrsta_materijala << endl;
        cout << "Unesite ime dizajnera: " << endl;
        cin >> Ime_dizajnera;
        file2 << "Ime dizajnera: " << Ime_dizajnera << endl;
        cout << "Unesite prezime dizajnera: " << endl;
        cin >> Prezime_dizajnera;
        file2 << "Prezime dizajnera: " << Prezime_dizajnera << endl;
        cout << "Projekt kojem pripada: " << endl;
        cin >> Projekt_kojem_pripada;
        file2 << "Projekt kojem pripada: " << Projekt_kojem_pripada << endl;
        file2 << " " << endl;
        cout << " " << endl;

        set_Ime_dizajna(Ime_dizajna);
        set_Ime_dizajnera(Ime_dizajnera);
        set_Prezime_dizajnera(Prezime_dizajnera);
        set_Projekt_kojem_pripada(Projekt_kojem_pripada);
    }

    string get_Sifra_materijala() {return Sifra_materijala;}
    string get_Vrsta_materijala() {return Vrsta_materijala;}

    void Ispis_Promotivnih_Materijala()
    {
        cout << " " << endl;
        cout << "Podatci o promotivnom materijalu: " << endl;
        cout << "----------------------------------" << endl;
        cout << "Sifra promotivnog materijala: " << get_Sifra_materijala() << endl;
        cout << "Ime promotivnog materijala: " << get_Ime_dizajna() << endl;
        cout << "Vrsta promotivnog materijala: " << get_Vrsta_materijala() << endl;
        cout << "Ime dizajnera: " << get_Ime_dizajnera() << endl;
        cout << "Prezime dizajnera: " << get_Prezime_dizajnera() << endl;
        cout << "Projekt kojem pripada: " << get_Projekt_kojem_pripada() << endl;
        cout << " " << endl;
    }

};

class Osoba {
protected:
    long OIB;
    string ime;
    string prezime;

public:
    Osoba ()
    {
        OIB=0;
        ime.clear();
        prezime.clear();
    }

    void set_ime (string novo_ime)
    {
        ime = novo_ime;
    }

    void set_prezime (string novo_prezime)
    {
        prezime = novo_prezime;
    }


    long get_oib() {return OIB;}
    string get_ime() {return ime;}
    string get_prezime() {return prezime;}


    void Unos_Osobe()
    {
        ofstream file_osoba ("osoba.txt" , ios::app);
        cout << " " << endl;
        cout << "Unos podataka o osobi: " << endl;
        cout << "-------------------------" << endl;
        cout << "OIB osobe: " << endl;
        cin >> OIB;
        file_osoba << "Podatci o osobi: " << endl;
        file_osoba << "-------------------" << endl;
        file_osoba << "OIB osobe: " << OIB << endl;
        cout << "Ime osobe: " << endl;
        cin >> ime;
        file_osoba << "Ime osobe: " << ime << endl;
        cout << "Prezime osobe: " << endl;
        cin >> prezime;
        file_osoba << "Prezime osobe: " << prezime << endl;
        file_osoba << " " << endl;
        cout << " " << endl;
    }
};

class Menadzer :public Osoba{

private:
    string pozicija_menadzera;
    string odjel_menadzera;

public:
    Menadzer()
    {
        pozicija_menadzera.clear();
        odjel_menadzera.clear();
    }

    void set_pozicija_menadzera(string nova_pozicija_menadzera)
    {
        pozicija_menadzera = nova_pozicija_menadzera;
    }

    void set_odjel_menadzera(string novi_odjel_menadzera)
    {
        odjel_menadzera = novi_odjel_menadzera;
    }

    string get_pozicija_menadzera() {return pozicija_menadzera;}
    string get_odjel_menadzera() {return odjel_menadzera;}

    void Unos_Menadzera()
    {
        ofstream file_menadzer ("menadzer.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o menadzeru: " << endl;
        cout << "-----------------------------" << endl;
        cout << "Pozicija menadzera: " << endl;
        cin >> pozicija_menadzera;
        file_menadzer << "Pozicija menadzera: " << pozicija_menadzera << endl;
        cout << "Odjel menadzera: " << endl;
        cin >> odjel_menadzera;
        file_menadzer << "Odjel menadzera: " << odjel_menadzera << endl;
        file_menadzer << " " << endl;
        cout << " " << endl;
    }

    void Ispis_Menadzera()
    {
        cout << " " << endl;
        cout << "Podatci o menadzeru: " << endl;
        cout << "---------------------" << endl;
        cout << "OIB menadzera: " << get_oib() << endl;
        cout << "Ime menadzera: " << get_ime() << endl;
        cout << "Prezime menadera: " << get_prezime() << endl;
        cout << "Pozicija menadzera: " << get_pozicija_menadzera() << endl;
        cout << "Odjel menadzera: " << get_odjel_menadzera() << endl;
        cout << " " << endl;
    }

};

class AnimacijskiTim{
protected:
    string Ime_AT;
    string Broj_clanova_AT;
    string Projekt_na_kojem_sudjeluje;
public:
    AnimacijskiTim(){
    Ime_AT.clear();
    Broj_clanova_AT.clear();
    Projekt_na_kojem_sudjeluje.clear();
    }

    void set_Ime_AT(string novo_Ime_AT)
    {
        Ime_AT = novo_Ime_AT;
    }

    void set_Broj_clanova_AT(int novi_Broj_clanova_AT)
    {
        Broj_clanova_AT = novi_Broj_clanova_AT;
    }

    void set_Projekt_na_kojem_sudjeluje(string novi_Projekt_na_kojem_sudjeluje)
    {
        Projekt_na_kojem_sudjeluje = novi_Projekt_na_kojem_sudjeluje;
    }

    string get_Ime_AT() {return Ime_AT;}
    string get_Broj_clanova_AT() {return Broj_clanova_AT;}
    string get_Projekt_na_kojem_sudjeluje() {return Projekt_na_kojem_sudjeluje;}

    void Unos_AT()
    {
        ofstream file4 ("AnimacijskiTim.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite opce podatke o animacijskom timu: " << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Ime animacijskog tima: " << endl;
        cin >> Ime_AT;
        file4 << "Podatci o animacijskom timu: " << endl;
        file4 << "------------------" << endl;
        file4 << "Ime animacijskog tima: " << Ime_AT << endl;
        cout << "Broj clanova animacijskog tima: " << endl;
        cin >> Broj_clanova_AT;
        file4 << "Broj clanova animacijskog tima: " << Broj_clanova_AT << endl;
        cout << "Projekt na kojem sudjeluje: " << endl;
        cin >> Projekt_na_kojem_sudjeluje;
        file4 << "Projekt na kojem sudjeluje: " << Projekt_na_kojem_sudjeluje << endl;
        file4 << " " << endl;
        cout << " " << endl;
    }

    void Ispis_AT()
    {
        cout << " " << endl;
        cout << "Opci podatci o animacijskome timu: " << endl;
        cout << "-----------------------------------" << endl;
        cout << "Ime animacijskog tima: " << get_Ime_AT() << endl;
        cout << "Broj clanova animacijskog tima: " << get_Broj_clanova_AT() << endl;
        cout << "Projekt na kojem sudjeluje: " << get_Projekt_na_kojem_sudjeluje() << endl;
        cout << " " << endl;
    }

};

class Bojac :public Osoba{
protected:
    int broj_scena;
    int broj_slika;

public:
    Bojac()
    {
        broj_scena = 0;
        broj_slika = 0;
    }

    void Unos_Bojaca()
    {
        ofstream file_bojac ("bojac.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o bojacu: " << endl;
        cout << "--------------------------" << endl;
        cout << "Broj scena koje obraduje: " << endl;
        cin >> broj_scena;
        file_bojac << "Broj scena koje obraduje: " << broj_scena << endl;
        cout << "Broj slika koje boja: " << endl;
        cin >> broj_slika;
        file_bojac << "Broj slika koje boja: " << broj_slika << endl;
        file_bojac << " " << endl;
        cout << " " << endl;

    }

    void Ispis_Bojaca()
    {
        cout << " " << endl;
        cout << "Podatci o bojacu: " << endl;
        cout << "------------------" << endl;
        cout << "Broj scena koje obraduje: " << broj_scena << endl;
        cout << "Broj slika koje boja: " << broj_slika << endl;
        cout << " " << endl;

    }

};

class Animator :public Osoba{
protected:
    int broj_scena;
    int broj_slika;

public:
    Animator()
    {
        broj_scena = 0;
        broj_slika = 0;
    }

    void Unos_Animatora()
    {
        ofstream file_animator ("animator.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o bojacu: " << endl;
        cout << "--------------------------" << endl;
        cout << "Broj scena koje obraduje: " << endl;
        cin >> broj_scena;
        file_animator << "Broj scena koje obraduje: " << broj_scena << endl;
        cout << "Broj slika koje boja: " << endl;
        cin >> broj_slika;
        file_animator << "Broj slika koje crta: " << broj_slika << endl;
        file_animator << " " << endl;
        cout << " " << endl;

    }

    void Ispis_Animatora()
    {
        cout << " " << endl;
        cout << "Podatci o bojacu: " << endl;
        cout << "------------------" << endl;
        cout << "Broj scena koje obraduje: " << broj_scena << endl;
        cout << "Broj slika koje crta: " << broj_slika << endl;
        cout << " " << endl;

    }

};

class TimZaZvuk{

protected:
    string Ime_TZZ;
    string Broj_clanova_TZZ;
    string Projekt_za_koji_snima;

public:
    TimZaZvuk()
    {
        Ime_TZZ.clear();
        Broj_clanova_TZZ.clear();
        Projekt_za_koji_snima.clear();
    }

    void set_Ime_TZZ(string novo_Ime_TZZ)
    {
        Ime_TZZ = novo_Ime_TZZ;
    }

    void set_Broj_clanova_TZZ(string novi_Broj_clanova_TZZ)
    {
        Broj_clanova_TZZ = novi_Broj_clanova_TZZ;
    }

    void set_Projekt_za_koji_snima(string novi_Projekt_za_koji_snima)
    {
        Projekt_za_koji_snima = novi_Projekt_za_koji_snima;
    }

    string get_Ime_TZZ() {return Ime_TZZ;}
    string get_Broj_clanova_TZZ() {return Broj_clanova_TZZ;}
    string get_Projekt_za_koji_snima() {return Projekt_za_koji_snima;}

    void Unos_TZZ()
    {
        ofstream file5 ("ZvucniTim.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o clanu zvucnog tima: " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Ime zvucnog tima: " << endl;
        cin >> Ime_TZZ;
        file5 << "Podatci o clanu zvucnog tima: " << endl;
        file5 << "------------------------------" << endl;
        file5 << "Ime zvucnog tima: " << Ime_TZZ << endl;
        cout << "Broj clanova zvucnog tima: " << endl;
        cin >> Broj_clanova_TZZ;
        file5 << "Broj clanova zvucnog tima: " << Broj_clanova_TZZ << endl;
        cout << "Projekt na kojem sudjeluje: " << endl;
        cin >> Projekt_za_koji_snima;
        file5 << "Projekt na kojem sudjeluje: " << Projekt_za_koji_snima << endl;
        file5 << " " << endl;
        cout << " " << endl;
    }

    void Ispis_TZZ()
    {
        cout << " " << endl;
        cout << "Podatci o clanu zvucnog tima: " << endl;
        cout << "------------------------------" << endl;
        cout << "Ime zvucnog tima: " << get_Ime_TZZ() << endl;
        cout << "Broj clanova zvucnog tima: " << get_Broj_clanova_TZZ() << endl;
        cout << "Projekt na kojem sudjeluje: " << get_Projekt_za_koji_snima() << endl;
        cout << " " << endl;
    }

};

class Glumac :public Osoba{

protected:
    string Lik_glumca;

public:
    Glumac()
    {
        Lik_glumca.clear();
    }

    void Unos_Glumca()
    {
        ofstream file_glumac ("glumac.txt" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o glumcu: " << endl;
        cout << "--------------------------" << endl;
        cout << "Lik kojeg glumi: " << endl;
        cin >> Lik_glumca;
        file_glumac << "Lik glumca: " << Lik_glumca << endl;
        file_glumac << " " << endl;
        cout << " " << endl;

    }

    string get_Lik_glumca() {return Lik_glumca;}

    void Ispis_Glumca()
    {
        cout << " " << endl;
        cout << "Podatci o glumcu: " << endl;
        cout << "------------------" << endl;
        cout << "Lik kojeg glumi: " << get_Lik_glumca() << endl;
        cout << " " << endl;
    }

};

class Kompozer :public Osoba{

protected:
    int broj_zvucnih_zapisa;
    int broj_instrumenata;
    string tip_instrumenta;

public:
    Kompozer()
    {
        broj_zvucnih_zapisa = 0;
        broj_instrumenata = 0;
        tip_instrumenta.clear();
    }

    void Unos_Kompozera()
    {
        ofstream file_kompozer ("kompozer" , ios::app);
        cout << " " << endl;
        cout << "Unesite podatke o kompozeru: " << endl;
        cout << "-----------------------------" << endl;
        cout << "Broj zvucnih zapisa: " << endl;
        cin >> broj_zvucnih_zapisa;
        file_kompozer << "Broj zvucnih zapisa: " << broj_zvucnih_zapisa << endl;
        cout << "Broj instrumenata: " << endl;
        cin >> broj_instrumenata;
        file_kompozer << "Broj instrumenata: " << broj_instrumenata << endl;
        cout << "Tip instrumenta: " << endl;
        cin >> tip_instrumenta;
        file_kompozer << "Tip instrumenta: " << tip_instrumenta << endl;
        file_kompozer << " " << endl;
        cout << " " << endl;

    }

    string get_tip_instrumenta(){return tip_instrumenta;}

    void Ispis_Kompozera()
    {
        cout << " " << endl;
        cout << "Podatci o kompozeru: " << endl;
        cout << "---------------------" << endl;
        cout << "Broj zvucnih zapisa: " << broj_zvucnih_zapisa << endl;
        cout << "Broj instrumenata: " << broj_instrumenata << endl;
        cout << "Tip instrumenta: " << endl;
        cout << " " << endl;
    }

};

class Montazer {

private:
    int broj_scena;
    int trajanje_scena;

public:
    Montazer()
    {
       broj_scena = 0;
       trajanje_scena = 0;
    }

    void Unos_Montazera()
    {
        ofstream file_montazer ("montazer.txt" , ios::app);
        cout << " " << endl;
        cout << "Unos podataka o montazeru: " << endl;
        cout << "---------------------------" << endl;
        cout << "Broj scena: " << endl;
        cin >> broj_scena;
        file_montazer << "Broj scena: " << broj_scena << endl;
        cout << "Trajanje scena: " << endl;
        cin >> trajanje_scena;
        file_montazer << "Trajanje scena: " << trajanje_scena << endl;
        file_montazer << " " << endl;
        cout << " " << endl;
    }

    void Ispis_Montazera()
    {
        cout << " " << endl;
        cout << "Ispis podataka o montazeru: " << endl;
        cout << "----------------------------" << endl;
        cout << "Broj scena:" << broj_scena << endl;
        cout << "Trajanje scena: " << trajanje_scena << endl;
        cout << " " << endl;
    }

};

class Reziser {

private:
    int godine_iskustva;

public:
    Reziser()
    {
        godine_iskustva = 0;
    }

    void Unos_Rezisera()
    {
        ofstream file_reziser ("reziser.txt" , ios::app);
        cout << " " << endl;
        cout << "Unos podataka o reziseru: " << endl;
        cout << "---------------------------" << endl;
        cout << "Godine iskustva: " << endl;
        cin >> godine_iskustva;
        file_reziser << "Godine iskustva: " << godine_iskustva << endl;
        file_reziser << " " << endl;
        cout << " " << endl;
    }

    void Ispis_Rezisera()
    {
        cout << " " << endl;
        cout << "Ispis podataka o reziseru: " << endl;
        cout << "---------------------------" << endl;
        cout << "Godine iskustva: " << godine_iskustva << endl;
        cout << " " << endl;
    }

};

int main ()
{
    Projekt p;
    Dizajn d;
    Lik l;
    Lokacija L;
    PromotivniMaterijali PM;
    Menadzer M;
    AnimacijskiTim AT;
    Bojac b;
    Animator a;
    TimZaZvuk TZZ;
    Glumac g;
    Kompozer k;
    Montazer m;
    Reziser r;
    int odabir, odabirOsoba, odabirDizajn, odabirAT, odabirTZZ, broj_osoba, broj_projekata, broj_AT, broj_TZZ, broj_dizajnova;

    cout << "Dobrodosli u program za upravljanje animacijskom kompanijom!" << endl;
    do{
        cout << "Izbornik: " << endl;
        cout << "-----1 Unos projekta" << endl;
        cout << "-----2 Unos osobe" << endl;
        cout << "-----3 Unos animacijskog tima" << endl;
        cout << "-----4 Unos tima za zvuk" << endl;
        cout << "-----5 Unos dizajna" << endl;
        cout << "-----0 Izlaz iz programa" << endl;
        cout << "Odabir: ";
        cin >> odabir;

        if (odabir==1){
            cout << "\nUnesite koliko projekata zelite unijeti: ";
            cin >> broj_projekata;
            vector<Projekt> projekt(broj_projekata);
            for (auto& p : projekt)
            {
                p.Unos_Projekta();
                p.Ispis_Projekta();
            }
        }

        else if (odabir==2){
            cout << "Unesite koliko osoba zelite unijeti: " << endl;
            cin >> broj_osoba;
            vector<Osoba> osobe(broj_osoba);
            for (auto& O : osobe)
            {
                O.Unos_Osobe();
                cout << "Koje zanimanje pripada osobi: " << endl;
                cout << "Izbornik: " << endl;
                cout << "---1 Menadzer" << endl;
                cout << "---2 Reziser" << endl;
                cout << "---3 Animator" << endl;
                cout << "---4 Bojac" << endl;
                cout << "---5 Montazer" << endl;
                cout << "---6 Kompozer" << endl;
                cout << "---7 Glumac" << endl;
                cin >> odabirOsoba;
                if (odabirOsoba==1)
                {
                    vector<Menadzer> menadzer(1);
                    for (auto& M : menadzer){
                        M.Unos_Menadzera();
                        M.Ispis_Menadzera();
                    }
                }
                else if (odabirOsoba==2)
                {
                    vector<Reziser> reziser(1);
                    for (auto& r : reziser){
                        r.Unos_Rezisera();
                        r.Ispis_Rezisera();
                    }
                }
                else if (odabirOsoba==3)
                {
                    vector<Animator> animator(1);
                    for (auto& a : animator){
                        a.Unos_Animatora();
                        a.Ispis_Animatora();
                    }
                }
                else if (odabirOsoba==4)
                {
                    vector<Bojac> bojac(1);
                    for (auto& b : bojac){
                        b.Unos_Bojaca();
                        b.Ispis_Bojaca();
                    }
                }
                else if (odabirOsoba==5)
                {
                    vector<Montazer> montazer(1);
                    for (auto& m : montazer){
                        m.Unos_Montazera();
                        m.Ispis_Montazera();
                    }
                }
                else if (odabirOsoba==6)
                {
                    vector<Kompozer> kompozer(1);
                    for (auto& k : kompozer){
                        k.Unos_Kompozera();
                        k.Ispis_Kompozera();
                    }
                }
                else if (odabirOsoba==7)
                {
                    vector<Glumac> glumac(1);
                    for (auto& g : glumac){
                        g.Unos_Glumca();
                        g.Ispis_Glumca();
                    }
                }
            }
        }

        else if (odabir==3){
            cout << "Koliko animacijskih timova zelite unijeti?: " << endl;
            cin >> broj_AT;
            vector<AnimacijskiTim> animacijskitim(broj_AT);
            for (auto& AT : animacijskitim)
            {
                cout << "Unesite opcenite informacije o animacijskom timu! " << endl;
                AT.Unos_AT();
                AT.Ispis_AT();
            }
        }
        else if (odabir==4){
            cout << "Koliko timova za zvuk zelite unijeti?: " << endl;
            cin >> broj_TZZ;
            vector<TimZaZvuk> timzazvuk(broj_TZZ);
            for (auto& TZZ : timzazvuk)
            {
                cout << "Unesite opcenite informacije o timu za zvuk! " << endl;
                TZZ.Unos_TZZ();
                TZZ.Ispis_TZZ();
            }
        }

        else if (odabir==5){
            cout << "Koliko dizajnova zelite unijeti?: " << endl;
            cin >> broj_dizajnova;
            vector<Dizajn> dizajn(broj_dizajnova);
            for (auto& d : dizajn)
            {
                cout << "Unesite opcenite informacije o 'dizajnu'! " << endl;
                d.Unos_Dizajna();
                d.Ispis_Dizajna();
                cout << "Odaberite vrstu dizajna!" << endl;
                cout << "----1 Dizajn lika" << endl;
                cout << "----2 Dizajn lokacije" << endl;
                cout << "----3 Dizajn promotivnog materijala" << endl;
                cout << "Odabir: ";
                cin >> odabirDizajn;
                if (odabirDizajn==1){
                    vector<Lik> lik(1);
                    for (auto& l : lik){
                        l.Unos_Lika();
                        l.Ispis_Lika();
                    }
                }
                else if (odabirDizajn==2){
                    vector<Lokacija> lokacija(1);
                    for (auto& L : lokacija){
                        L.Unos_Lokacije();
                        L.Ispis_Lokacije();
                    }
                }
                else if(odabirDizajn==3){
                    vector<PromotivniMaterijali> promotivnimaterijal(1);
                    for (auto& PM : promotivnimaterijal){
                        PM.Unos_Promotivnih_materijala();
                        PM.Ispis_Promotivnih_Materijala();
                    }
                }
            }
        }

    }while(odabir != 0);
    cout << "Dovidenja!" << endl;

    return 0;
}

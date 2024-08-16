#include <iostream>

class Plant {
private:
    std::string species; // Nombre cientfico.
    std::string commonName; // Nombre comun.
    std::string pollinators; // Polinizadores con los cuales la planta interactua.
    std::string medicinalUse; //Posibles usos medicinales de la planta.
    std::string leafType; // Tipo de hoja.
    std::string bloomColor; // Color de las flores o frutos que produce.
    std::string bloomSeason; // Estacion de floracion.
    std::string soilType; // Tipo de suelo sobre el cual se desarrolla.
    int waterNeeds; // Cantidad de agua que consume. (Litros)
    int sunlightNeeds; // Cantidad de luz solar que requiere. (Horas)
    std::string typeofFoliage; //Tipo de follaje. (Penere o Caducifolio)
    std::string seedType; // Tipo de semilla que produce.
    std::string growthHabit; // Habito de creciemiendo.
    std::string propagationMethod; // Metodo de propagacion.
    std::string maintenanceLevel; // Mantenimiento requerido. (Alto, Medio, Bajo)

public:
    void setspecies(const std::string& s) {
        species = s;
    }
    void setcommonName(const std::string& n) {
        commonName = n;
    }
    void setpollinators(const std::string& p) {
        pollinators = p;
    }
    void setmedicinalUse(const std::string& m) {
        medicinalUse = m;
    }
    void setleafType(const std::string& t) {
        leafType = t;
    }
    void setbloomColor(const std::string& c) {
        bloomColor = c;
    }
    void setbloomSeason(const std::string& s) {
        bloomSeason = s;
    }
    void setsoilType(const std::string& g) {
        soilType = g;
    }
    void setwaterNeeds(int w) {
        waterNeeds = w;
    }
    void setsunlightNeeds(int l) {
        sunlightNeeds = l;
    }
    void settypeofFoliage(const std::string& f) {
        typeofFoliage = f;
    }
    void setseedType(const std::string& d) {
        seedType = d;
    }
    void setgrowthHabit(const std::string& h) {
        growthHabit = h;
    }
    void setpropagationMethod(const std::string& v) {
        propagationMethod = v;
    }
    void setmaintenanceLevel(const std::string& t) {
        maintenanceLevel = t;
    }

    //Getters

    std::string getspecies() const {
        return species;
    }
    std::string getcommonName()const {
        return commonName;
    }
    std::string getpollinators()const {
        return pollinators;
    }
    std::string getmedicinalUse() const {
        return medicinalUse;
    }
    std::string getleafType() const {
        return leafType;
    }
    std::string getbloomColor() const {
        return bloomColor;
    }
    std::string getbloomSeason() const {
        return bloomSeason;
    }
    std::string getsoilType() const {
        return soilType;
    }
    int getwaterNeeds() const {
        return waterNeeds;
    }
    int getsunlightNeeds() const {
        return sunlightNeeds;
    }
    std::string gettypeofFoliage() const {
        return typeofFoliage;
    }
    std::string getseedType() const {
        return seedType;
    }
    std::string getgrowthHabit() const {
        return growthHabit;
    }
    std::string getpropagationMethod() const {
        return propagationMethod;
    }
    std::string getmaintenanceLevel() const {
        return maintenanceLevel;
    }
};

int main() {
    Plant myPlant;

    myPlant.setspecies("Nymphaea caerulea");
    myPlant.setcommonName("Loto de Egipto");
    myPlant.setpollinators("Escarabajos, Abejas, Moscas");
    myPlant.setmedicinalUse("Sedante ligero utilizado para tratar dolores.");
    myPlant.setleafType("Orbicular");
    myPlant.setbloomColor("Varia de un azul ligero a un azul vivido.");
    myPlant.setbloomSeason("Verano a otono temprano.");
    myPlant.setsoilType("Sustrato arcilloso o rico en arcilla.");
    myPlant.setwaterNeeds(0);
    myPlant.setsunlightNeeds(8);
    myPlant.settypeofFoliage("Perenne");
    myPlant.setseedType("Semilla");
    myPlant.setgrowthHabit("Hojas flotantes.");
    myPlant.setpropagationMethod("Dispersion de semillas y el crecimiento de rizomas.");
    myPlant.setmaintenanceLevel("Bajo");


    std::cout << "Especie: " << myPlant.getspecies() << std::endl;
    std::cout << "Nombre comun: " << myPlant.getcommonName() << std::endl;
    std::cout << "Polinizadores: " << myPlant.getpollinators() << std::endl;
    std::cout << "Usos Medicinales: " << myPlant.getmedicinalUse() << std::endl;
    std::cout << "Tipo de Hoja: " << myPlant.getleafType() << std::endl;
    std::cout << "Color del Fruto: " << myPlant.getbloomColor() << std::endl;
    std::cout << "Temporada de Floracion: " << myPlant.getbloomSeason() << std::endl;
    std::cout << "Tipo de Sustrato: " << myPlant.getsoilType() << std::endl;
    std::cout << "Necesidades de Agua: " << myPlant.getwaterNeeds() << std::endl;
    std::cout << "Necesidades de Luz Solar: " << myPlant.getsunlightNeeds() << "hrs por dia" << std::endl;
    std::cout << "Tipo de Follaje: " << myPlant.gettypeofFoliage() << std::endl;
    std::cout << "Tipo de Semilla: " << myPlant.getseedType() << std::endl;
    std::cout << "Habito de Crecimiento: " << myPlant.getgrowthHabit() << std::endl;
    std::cout << "Metodos de Propagacion: " << myPlant.getpropagationMethod() << std::endl;
    std::cout << "Nivel de Mantenimiento: " << myPlant.getmaintenanceLevel() << std::endl;

    return 0;
}

#include <iostream>
#include <string>

class Bird {
private:
    std::string species; // Nombre científico.
    std::string commonName; // Nombre común.
    std::string habitat; // Hábitat natural.
    std::string diet; // Dieta.
    std::string plumageColor; // Color del plumaje.
    double wingspan; // Envergadura de las alas (en cm).
    double weight; // Peso (en gramos).
    std::string call; // Llamado o canto característico.
    std::string migrationPattern; // Patrón de migración.
    std::string nestingBehavior; // Comportamiento de anidación.
    std::string breedingSeason; // Temporada de cría.
    std::string conservationStatus; // Estado de conservación.
    int averageLifespan; // Esperanza de vida (en años).
    std::string feedingBehavior; // Comportamiento de alimentación.
    bool isEndangered; // Si está en peligro de extinción.

public:
    void setSpecies(const std::string& s) {
        species = s;
    }
    void setCommonName(const std::string& n) {
        commonName = n;
    }
    void setHabitat(const std::string& h) {
        habitat = h;
    }
    void setDiet(const std::string& d) {
        diet = d;
    }
    void setPlumageColor(const std::string& c) {
        plumageColor = c;
    }
    void setWingspan(double w) {
        wingspan = w;
    }
    void setWeight(double w) {
        weight = w;
    }
    void setCall(const std::string& c) {
        call = c;
    }
    void setMigrationPattern(const std::string& m) {
        migrationPattern = m;
    }
    void setNestingBehavior(const std::string& n) {
        nestingBehavior = n;
    }
    void setBreedingSeason(const std::string& b) {
        breedingSeason = b;
    }
    void setConservationStatus(const std::string& c) {
        conservationStatus = c;
    }
    void setAverageLifespan(int a) {
        averageLifespan = a;
    }
    void setFeedingBehavior(const std::string& f) {
        feedingBehavior = f;
    }
    void setIsEndangered(bool e) {
        isEndangered = e;
    }

    // Getters
    std::string getSpecies() const {
        return species;
    }
    std::string getCommonName() const {
        return commonName;
    }
    std::string getHabitat() const {
        return habitat;
    }
    std::string getDiet() const {
        return diet;
    }
    std::string getPlumageColor() const {
        return plumageColor;
    }
    double getWingspan() const {
        return wingspan;
    }
    double getWeight() const {
        return weight;
    }
    std::string getCall() const {
        return call;
    }
    std::string getMigrationPattern() const {
        return migrationPattern;
    }
    std::string getNestingBehavior() const {
        return nestingBehavior;
    }
    std::string getBreedingSeason() const {
        return breedingSeason;
    }
    std::string getConservationStatus() const {
        return conservationStatus;
    }
    int getAverageLifespan() const {
        return averageLifespan;
    }
    std::string getFeedingBehavior() const {
        return feedingBehavior;
    }
    bool getIsEndangered() const {
        return isEndangered;
    }
};


int main() {
    Bird myBird;
    myBird.setSpecies("Harpia harpyja");
    myBird.setCommonName("Harpia or Águila Arpia");
    myBird.setHabitat("Bosques tropicales y subtropicales en América Central y del Sur.");
    myBird.setDiet("Carnívora, se alimenta de mamíferos medianos y grandes, aves y reptiles.");
    myBird.setPlumageColor("Plumaje negro con una corona blanca en la cabeza.");
    myBird.setWingspan(200);
    myBird.setWeight(6000);
    myBird.setCall("Un grito fuerte y distintivo, generalmente un 'ki-ki-ki' agudo.");
    myBird.setMigrationPattern("No migratoria, residen en su hábitat durante todo el año.");
    myBird.setNestingBehavior("Nidos grandes construidos en árboles altos.");
    myBird.setBreedingSeason("Varía según la región, generalmente de abril a agosto.");
    myBird.setConservationStatus("Casi amenzada.");
    myBird.setAverageLifespan(25);
    myBird.setFeedingBehavior("Caza y pesca, se alimenta principalmente de presas vivas.");
    myBird.setIsEndangered(true);

    std::cout << "Especie: " << myBird.getSpecies() << std::endl;
    std::cout << "Nombre Comun: " << myBird.getCommonName() << std::endl;
    std::cout << "Habitat: " << myBird.getHabitat() << std::endl;
    std::cout << "Dieta: " << myBird.getDiet() << std::endl;
    std::cout << "Color del Plumaje: " << myBird.getPlumageColor() << std::endl;
    std::cout << "Envergadura: " << myBird.getWingspan() << " cm" << std::endl;
    std::cout << "Peso: " << myBird.getWeight() << " grams" << std::endl;
    std::cout << "Canto: " << myBird.getCall() << std::endl;
    std::cout << "Patron de Migracion: " << myBird.getMigrationPattern() << std::endl;
    std::cout << "Comprtamiento de Anidamiento: " << myBird.getNestingBehavior() << std::endl;
    std::cout << "Temporada de Apareamiento: " << myBird.getBreedingSeason() << std::endl;
    std::cout << "Estado de Conservacion: " << myBird.getConservationStatus() << std::endl;
    std::cout << "Promedio de Vida: " << myBird.getAverageLifespan() << " years" << std::endl;
    std::cout << "Comportamiento de Caza: " << myBird.getFeedingBehavior() << std::endl;
    std::cout << "En peligro de extincion: " << (myBird.getIsEndangered() ? "SI" : "NO") << std::endl;

    return 0;
}
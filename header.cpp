#ifndef SIMS_CLASSES_H
#define SIMS_CLASSES_H

#include <string>
#include <vector>

class LifeEvent {
public:
    LifeEvent(std::string eventName, int ageEffect, bool triggersAging);
    ~LifeEvent();

    void triggerAging();

private:
    std::string eventName;
    int ageEffect;
    bool triggersAging;
};

class DynamicAgingSystem {
public:
    DynamicAgingSystem();
    ~DynamicAgingSystem();

    void enableDynamicAging();
    // Add more methods as needed

private:
    bool dynamicAgingEnabled;
};

class Sim {
public:
    Sim(int age, std::string lifeStage, const std::vector<std::string>& traits,
        const std::vector<std::string>& aspirations);
    ~Sim();

    // Getter methods
    int getAge() const;
    std::string getLifeStage() const;

    // Add more getter and setter methods as needed

private:
    int age;
    std::string lifeStage;
    std::vector<std::string> traits;
    std::vector<std::string> aspirations;

    // Add relationships with Career, Relationship, and Skill classes
};

class Career {
public:
    Career(std::string jobTitle, int salary, int jobLevel);
    ~Career();

private:
    std::string jobTitle;
    int salary;
    int jobLevel;
};

class Relationship {
public:
    Relationship(Sim* sim1, Sim* sim2, std::string status);
    ~Relationship();

private:
    Sim* sim1;
    Sim* sim2;
    std::string status;
};

class Skill {
public:
    Skill(std::string skillName, int level, int experience);
    ~Skill();

private:
    std::string skillName;
    int level;
    int experience;
};

#endif //SIMS_CLASSES_H

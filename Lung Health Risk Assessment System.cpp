#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

class Person
{
protected:
    string Name;
    string Gender;
    int Age;
    bool Smoker;
    bool Family_History;

public:
    void Input_Person()
    {
    cout << "Enter your Name: ";
    getline(cin, Name);
    cout << "Enter your Age: ";
    cin >> Age;
    cout << "Enter your Gender: ";
    cin >> Gender;
    cout << "Do you smoke? (1=Yes, 0=No): ";
    cin >> Smoker;
    cout << "Family history of lung disease? (1=Yes, 0=No): ";
    cin >> Family_History;
    }

    int Calculate_Risk()
    {
    int risk = 0;
    if (Age > 40)
    risk += 3;
    if (Smoker)
    risk += 14;
    if (Family_History)
    risk += 7;
    return risk;
    }
bool isSmoker()
{
return Smoker;
   }
string getName()
{
return Name;
   }
int getAge()
{
return Age;
  }
string getGender()
{
return Gender;
}
bool getFamilyHistory()
{
return Family_History;
}
void display()
    {
    cout << "Person Details:"<<endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Gender: " << Gender << endl;
    }
};
class Symptoms
{
private:
    bool Cough, Breath_Shortness, Chest_pain, Hemoptysis;
    int Severity;
public:
    void Input_Symptom()
    {
    cout << "Persistent cough? (1=Yes, 0=No): ";
    cin >> Cough;
    cout << "Shortness of breath? (1=Yes, 0=No): ";
    cin >> Breath_Shortness;
    cout << "Chest pain? (1=Yes, 0=No): ";
    cin >> Chest_pain;
    cout << "Coughing blood? (1=Yes, 0=No): ";
    cin >> Hemoptysis;
    cout << "Symptom severity (1-3): ";
    cin >> Severity;
    }
int Calculate_Risk()
    {
    int risk = 0;
    if (Cough) risk += 5;
    if (Breath_Shortness) risk += 10;
    if (Chest_pain) risk += 12;
    if (Hemoptysis) risk += 15;
    risk += Severity * 3;
    return risk;
    }
};
class Environment
{
private:
    int Pollution_Level;
    bool Workplace_Hazard;

public:
    void Input_Environment()
    {
    cout << "Air pollution level (1-3): ";
    cin >> Pollution_Level;
    cout << "Workplace exposure? (1=Yes, 0=No): ";
    cin >> Workplace_Hazard;
    }
int Calculate_Risk()
    {
    int risk = Pollution_Level * 3;
    if (Workplace_Hazard)
    risk += 3;
    return risk;
    }
};

class Risk_Calculator
{
protected:
    int Total_Risk;
public:
Risk_Calculator()
{
Total_Risk = 0;
}
void Total(int p, int s, int e)
{
Total_Risk = p + s + e;
}
int Get_Risk()
{
return Total_Risk;
}
string Get_Category()
{
if (Total_Risk < 40)
return "Low Risk";
else if (Total_Risk < 70)
return "Moderate Risk";
else
return "High Risk";
  }
};

class Stage : public Risk_Calculator
{
public:
void Estimate_Stage()
{
cout << "Cancer Stage Estimation:"<<endl;
if (Total_Risk >= 70)
cout << "Stage 3: Severe lung damage. Immediate medical attention required."<<endl;
else if (Total_Risk >= 50)
cout << "Stage 2: Significant lung damage detected."<<endl;
else if (Total_Risk >= 30)
cout << "Stage 1: Early stage, minimal damage."<<endl;
    }
};

class Recovery_Plan
{
public:
void Show_Plan(int risk, bool smoker)
{
if (risk <= 30)
{
cout << "No significant health risk detected!"<<endl;
  }
if (risk >= 40)
{
cout << "Recovery Plan:"<<endl;
if (smoker)
cout << "1. Quit smoking"<<endl;
cout << "2. Improve air quality"<<endl;
cout << "3. Eat healthy food"<<endl;
}
if (risk >= 70)
{
cout << "Seek professional therapy immediately!"<<endl;
}
  }
};

class Lifestyle
{
public:
void show_Lifestyle(int risk)
{
if (risk >= 70)
{
cout << "\nLifestyle Recommendations:"<<endl;
cout << "1. Regular lung screening"<<endl;
cout << "2. Healthy diet"<<endl;
cout << "3. Exercise regularly"<<endl;
cout << "4. Proper sleep"<<endl;
 }
}
};

class History : public Person
{
public:
    void Save(int risk)
    {
    ofstream file("risk_history.txt", ios::app);
    file << "Name: " << Name << endl;
    file << "Age: " << Age << endl;
    file << "Gender: " << Gender << endl;
    file << "Do you Smoke? " << Smoker << endl;
    file << "Family History: " << Family_History << endl;
    file << "Risk Score: " << risk << "%" << endl;
    file << endl;
    file.close();
    }
void SearchByName()
{
ifstream file("risk_history.txt");
string searchName, line;
bool found = false;
cout << "Enter name to search history: "<<endl;
cin.ignore();
getline(cin, searchName);
while (getline(file, line))
{
if (line == "Name: " + searchName)
{
found = true;
cout << "Patient Record Found:"<<endl;
cout << line << endl;
for (int i = 0; i < 4; i++)
{
getline(file, line);
cout << line << endl;
}
 }
  }
if (!found)
cout << "No record found for this name!"<<endl;
file.close();
    }
};
int main()
{
    Symptoms S;
    Environment E;
    Stage s;
    Recovery_Plan R;
    Lifestyle L;
    History P;
    system("cls");
    cout << "Lung Health Risk Assessment System:"<<endl;

    P.Input_Person();
    S.Input_Symptom();
    E.Input_Environment();
    int pr = P.Calculate_Risk();
    int sr = S.Calculate_Risk();
    int er = E.Calculate_Risk();
    s.Total(pr, sr, er);
    P.display();
    cout << "\nTotal Risk Score: " << s.Get_Risk() << "%"<<endl;
    cout << "Risk Category: " << s.Get_Category() << endl;
    s.Estimate_Stage();
    R.Show_Plan(s.Get_Risk(), P.isSmoker());
    L.show_Lifestyle(s.Get_Risk());
    P.Save(s.Get_Risk());
    cout << "Current Patient Risk History:"<<endl;
    cout << "Name: " << P.getName() << endl;
    cout << "Age: " << P.getAge() << endl;
    cout << "Gender: " << P.getGender() << endl;
    cout << "Risk Score: " << s.Get_Risk() << "%"<<endl;
    char choice;
    cout << "Do you want to search patient's history by name? (y/n): "<<endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    P.SearchByName();

    getch();
    return 0;
}


﻿// Homework-03.04.2024-GettersAndSetters.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Dog
{
private:
    string name;
    string color;
    string bread;
    string favorite_food;
    double weight = 0;
    string HumanNames[100]
    {
        "Alexandr", "Kostya", "Roma", "Anya", "Lena",
        "Ivan", "Marina", "Sergey", "Olya", "Dima",
        "Tanya", "Andrey", "Natasha", "Vova", "Katya",
        "Artem", "Yulya", "Maxim", "Vika", "Pavlik",
        "Sveta", "Nikita", "Nina", "Denis", "Eva"
    };
public:
    void Bark()
    {
        cout << bread << name << " : " << "GAV-GAV...\n";
    }
    void Growl()
    {
        cout << bread << name << " : " << "R-R-R-R-R-R...\n";
    }
    void Walk()
    {
        cout << " loves to walk in the park,";
    }
    void Eat()
    {
        cout << bread << name << " love eat " << favorite_food << ".\n";
    }
    void Sleep()
    {
        cout << bread << name << " went to sleep.\n";
    }
 
    void SetName(string Name) 
    {
        for (int i = 0; i < 25; i++)
        {
            if (Name == HumanNames[i]) 
            { 
                throw "ERROR!"; 
            }
            name = Name;
        }
        
    }
    string GetName() 
    {
        return name;
    }
    void SetColor(string Color)
    {
        if (Color == "Orange" || Color == "Green" || Color == "Blue" ||
            Color == "Pink" || Color == "Red" || Color == "Salatovyi" ||
            Color == "Malinovyi")
        {
            throw "ERROR!";
        }
        color = Color;
    }
    string GetColor()
    {
        return color;
    }
    void SetBread(string Bread)
    {
        
        bread = Bread;
    }
    string GetBread()
    {
        return bread;
    }
    void SetFavoriteFood(string FavoriteFood)
    {
        if (FavoriteFood == "Krosovki")
        {
            throw "ERROR!";
        }
        favorite_food = FavoriteFood;
    }
    string GetFavoriteFood()
    {
        return favorite_food;
    }
    void SetWeight(double Weight)
    {
        if (Weight < 0 || Weight > 100)
        {
            throw "ERROR!";
        }
        weight = Weight;
    }
    double GetWeight()
    {
        return weight;
    }
};

class PowerBank
{
private:
    string brand;
    string color;
    int quantity_ports = 0;
    double capacity = 0;
    bool Type_C = false;
    bool USB = false;
    bool Micro_USB = false;
    bool charg = false;
public:
    void Charging()
    {
        if ((Type_C || Micro_USB) && !USB && charg)
        {
            cout << "Power bank charge the device.\n";
        }
        else if (USB)
        {
            cout << "Power bank charging.\n";
        }
    }
    void  PowerBankInfo()
    {
        cout << "Power Bank Info:\n";
        cout << "\t\tBrand: " << brand << "\n";
        cout << "\t\tColor: " << color << "\n";
        cout << "\t\tQuantity USB-ports: " << quantity_ports << "\n";
        cout << "\t\tCapacity: " << capacity << " mA/h\n";
        if (Type_C)
        {
            cout << "\t\tHave Type C-port \n";
        }
        if (Micro_USB)
        {
            cout << "\t\tHave Micro USB-port \n";
        }
    }
    void SetBrand(string Brand)
    {
        brand = Brand;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetColor(string Color)
    {
        color = Color;
    }
    string GetColor()
    {
        return color;
    }
    void SetQuantityPorts(int QuantityPorts)
    {
        quantity_ports = QuantityPorts;
    }
    int GetQuantityPorts()
    {
        return quantity_ports;
    }
    void SetCapacity(double Capacity)
    {
        capacity = Capacity;
    }
    double GetCapacity()
    {
        return capacity;
    }
    void SetTypeC(bool TypeC)
    {
        Type_C = TypeC;
    }
    bool GetTypeC()
    {
        return Type_C;
    }
    void SetU_S_B(bool U_S_B)
    {
        USB = U_S_B;
    }
    bool GetU_S_B()
    {
        return USB;
    }
    void SetMicroUSB(bool MicroUSB)
    {
        Micro_USB = MicroUSB;
    }
    bool GetMicroUSB()
    {
        return Micro_USB;
    }
    void SetCharg(bool Charg)
    {
        charg = Charg;
    }
    bool GetCharg()
    {
        return charg;
    }
};

class Mouse
{
private:
    string brand;
    string model;
    string color;
    bool wireless = false;
    bool left_button = false;
    bool right_button = false;
    bool scrol = false;
public:
    void Press_left_button()
    {
        if (left_button)
        {
            cout << "Perform an action.\n";
        }
    }
    void Press_right_button()
    {
        if (right_button)
        {
            cout << "Show context menu.\n";
        }
    }
    void Scrol()
    {
        if (scrol)
        {
            cout << "Scroll....scrol...scrol...scrol...\n";
        }
    }
    void MouseInfo()
    {
        cout << "Mouse Info:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tColor: " << color << "\n";
        if (wireless)
        {
            cout << "\tWired or wireless:  wireless.\n";
        }
        else
        {
            cout << "\tWired or wireless:  wired.\n";
        }
    }
    void SetBrand(string Brand)
    {
        brand = Brand;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetModel(string Model)
    {
        model = Model;
    }
    string GetModel()
    {
        return model;
    }
    void SetColor(string Color)
    {
        color = Color;
    }
    string GetColor()
    {
        return color;
    }
    void SetWireless(bool Wireless)
    {
        wireless = Wireless;
    }
    bool GetWireless()
    {
        return wireless;
    }
    void SetLeftButton(bool LeftButton)
    {
        left_button = LeftButton;
    }
    bool GetLeftButton()
    {
        return left_button;
    }
    void SetRightButton(bool RightButton)
    {
        right_button = RightButton;
    }
    bool GetRightButton()
    {
        return right_button;
    }
    void SetScrol(bool Scrol)
    {
        scrol = Scrol;
    }
    bool GetScrol()
    {
        return scrol;
    }

};

class TV
{
private:
    string brand;
    string model;
    double diagonal = 0;
    string color;
public:
    void TVInfo()
    {
        cout << "TV Info:\n";
        cout << "\tBrand: " << brand << "\n";
        cout << "\tModel: " << model << "\n";
        cout << "\tDiagonal: " << diagonal << " inches" << "\n";
        cout << "\tColor: " << color << "\n";
    }
    void TV_On()
    {
        cout << "The TV turns on...\n";
    }

    void TV_Off()
    {
        cout << "The TV turns off\n";
    }

    void changeChannel(int channel)
    {
        cout << "Changing channel to " << channel << "\n";
    }
    void SetBrand(string Brand)
    {
        brand = Brand;
    }
    string GetBrand()
    {
        return brand;
    }
    void SetModel(string Model)
    {
        model = Model;
    }
    string GetModel()
    {
        return model;
    }
    void SetDiagonal(double Diagonal)
    {
        diagonal = Diagonal;
    }
    double GetDiagonal()
    {
        return diagonal;
    }
    void SetColor(string Color)
    {
        color = Color;
    }
    string GetColor()
    {
        return color;
    }
};

class Automobile
{
private:
    string brand;
    string model;
    string equipment;
    string engine_type;
    double engine_volume = 0;
    string fuel;
    string transmision;
    double power = 0;
    int wheel_drive = 0;
    string carBrands[31]
    {
        "Toyota", "Honda", "BMW", "Ford", "Chevrolet",
        "Volkswagen", "Tesla", "Audi", "Mercedes", "Subaru",
        "Nissan", "Jeep", "Hyundai", "Kia", "Mazda",
        "Lexus", "Porsche", "Volvo", "Jaguar", "Land Rover",
        "Chevrolet", "Ferrari", "Lamborgini", "Moskvich", "VAZ",
        "ZAZ", "Opel", "Reno", "Peugeot", "Seat", "Suzuki"

    };
public:
    void CarInfo()
    {
        cout << "Car Information:\n";
        cout << "\t\tCar brand: " << brand << "\n";
        cout << "\t\tModel: " << model << "\n";
        cout << "\t\tCar equipment: " << equipment << "\n";
        cout << "\t\tEngine type: " << engine_type << "\n";
        cout << "\t\tEngine volume: " << engine_volume << " sm3\n";
        cout << "\t\tFuel: " << fuel << "\n";
        cout << "\t\tTransmision: " << transmision << "\n";
        cout << "\t\tEngine power: " << power << " hp\n";
        cout << "\t\tWheel drive: " << wheel_drive << " wheels\n";
    }

    void SetBrand(string Brand)
    {
        for (int i = 0; i < 31; i++)
        {
            
            if (Brand == carBrands[i])
            {
                brand = Brand;
                return;
            } 
        }
        throw "ERROR!";
    }
    string GetBrand()
    {
        return brand;
    }
    void SetModel(string Model)
    {
        model = Model;
    }
    string GetModel()
    {
        return model;
    }
    void SetEquipment(string Equipment)
    {
        equipment = Equipment;
    }
    string GetEquipment()
    {
        return equipment;
    }
    void SetEngineType(string EngineType)
    {
        engine_type = EngineType;
    }
    string GetEngineType()
    {
        return engine_type;
    }
    void SetEngineVolume(double EngineVolume)
    {
        engine_volume = EngineVolume;
    }
    double GetEngineVolume()
    {
        return engine_volume;
    }
    void SetFuel(string Fuel)
    {
        fuel = Fuel;
    }
    string GetFuel()
    {
        return fuel;
    }
    void SetTransmision(string Transmision)
    {
        transmision = Transmision;
    }
    string GetTransmision()
    {
        return transmision;
    }
    void SetPower(double Power)
    {
        power = Power;
    }
    double GetPower()
    {
        return power;
    }
    void SetWheelDrive(int WheelDrive)
    {
        if (WheelDrive != 2 && WheelDrive != 4)
        {
            throw "ERROR!";
        }
        wheel_drive = WheelDrive;
    }
    int GetWheelDrive()
    {
        return wheel_drive;
    }
};

class Sosed
{
private:
    string name;
    string shoes;
    string tool;
    bool sleeping = false;
    string mental_condition;
    string NotHumanNames[27]
    {
        "Lordik", "Barsik", "Murzik", "Rex", "Muhtar",
        "Bobik", "Sharik", "Pushok", "Zhuchka", "Bonya",
        "Tishka", "Ryzhik", "Belka", "Strelka", "Archi",
        "Beizi", "Chak", "Kit", "Simba", "Snezhok",
        "Tuzik", "Greta", "Volt", "Richi", "Kuzya",
        "Mus`ka", "Nafanya"
    };
public:
    void Never_sleep()
    {
        cout << "A-HA-HA!!! NO, NO, NO\n";
    }
    void About_myself()
    {
        cout << "My name is " << name << ", i am a " << mental_condition << " And i have a " << tool << "\n";
    }
    void Work()
    {
        cout << "I'll put my on now " << shoes << " and take my " << tool << "\n";
        cout << "I urgently need to do something. NOW!\n";
    }
    
    void SetName(string Name)
    {
        for (int i = 0; i < 27; i++)
        {
            if (Name == NotHumanNames[i])
            {
                throw "ERROR!";
            }
            name = Name;
        }
    }
    string GetName()
    {
        return name;
    }
    void SetShoes(string Shoes)
    {  
         shoes = Shoes; 
    }
    string GetShoes()
    {
        return shoes;
    }
    void SetTool(string Tool)
    {
        
        tool = Tool;
        
    }
    string GetTool()
    {
        return tool;
    }
    void SetSleeping(bool Sleeping)
    {

        sleeping = Sleeping;

    }
    bool GetSleeping()
    {
        return sleeping;
    }
    void SetMentalCondition(string MentalCondition)
    {

        mental_condition = MentalCondition;

    }
    string GetMentalCondition()
    {
        return mental_condition;
    }
};

int main()
{
    //////////////////////////////////////////////////////////////////////////                  DOG                    ///////////////////////////////////////////////////////////////// 
    Dog dog;
 
    dog.SetName("Benya"); 
    dog.SetFavoriteFood("meat"); 
    dog.SetBread("Pikines "); 
    dog.SetWeight(6);
    dog.SetColor("beige");

    cout << dog.GetName() << " color is " << dog.GetColor() << ".\n";
    dog.Bark();
    cout << dog.GetName() << " ";
    dog.Walk();
    cout << " in any weather.\n";
    cout << dog.GetName() << " was " << dog.GetWeight() << " kg.\n";
    dog.Eat();
    dog.SetWeight(7);
    cout << dog.GetName() << " now " << dog.GetWeight() << " kg.\n";
    cout << "And ";
    dog.Sleep();
    cout << "\n\n\n";

    /////////////////////////////////////////////////

    dog.SetName("Lordik");
    dog.SetFavoriteFood("oladushki");
    dog.SetBread("Pikines ");
    dog.SetWeight(5);
    dog.SetColor("ginger");

    cout << dog.GetName() << " color is " << dog.GetColor() << ".\n";
    dog.Growl();
    cout << dog.GetName() << " not mutch";
    dog.Walk();
    cout << " if it rains.\n";
    cout << dog.GetName() << " was " << dog.GetWeight() << " kg.\n";
    dog.Eat();
    cout << dog.GetName() << " now " << dog.GetWeight() << " kg.\n";
    cout << "And ";
    dog.Sleep();
    cout << "\n\n\n";

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////                  SOSED                    ///////////////////////////////////////////////////////////////
    
    Sosed sosed;

    sosed.SetName("Arkadiy");
    sosed.SetShoes("Chugunnye Bashmaki");
    sosed.SetTool("Perforator");
    sosed.SetSleeping(true);
    sosed.SetMentalCondition("CRAZYYY!");

    if (sosed.GetSleeping())
    {
        sosed.Never_sleep();
        sosed.About_myself();
        sosed.Work();
    }
    cout << "\n\n\n";

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////                  AUTOMOBILE                    //////////////////////////////////////////////////////////
    
    Automobile car;
    
    car.SetBrand("Ford");
    car.SetModel("Fusion");
    car.SetEquipment("Titanium");
    car.SetEngineType("DVS");
    car.SetEngineVolume(2000.01);
    car.SetFuel("Gasoline");
    car.SetTransmision("Auto");
    car.SetPower(245);
    car.SetWheelDrive(2);

    car.CarInfo();
    cout << "\n\n\n";
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////                      TV                        //////////////////////////////////////////////////////////
    
    TV tv;
    
    tv.SetBrand("NoName");
    tv.SetModel("NoName3000");
    tv.SetDiagonal(48);
    tv.SetColor("Black");

    tv.TVInfo();
    cout << "\n";
    tv.TV_On();
    tv.changeChannel(1);
    tv.TV_Off();
    cout << "\n\n\n";
     
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////                      POWER BANK                        //////////////////////////////////////////////////////////
    
    PowerBank PB;

    PB.SetBrand("Noname");
    PB.SetColor("Black");
    PB.SetQuantityPorts(4);
    PB.SetCapacity(20000);
    PB.SetTypeC(true);
    PB.SetU_S_B(false);
    PB.SetMicroUSB(true);
    PB.SetCharg(true);

    PB.Charging();
    cout << "\n";
    PB.PowerBankInfo();
    cout << "\n\n\n";

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////                      MOUSE                        //////////////////////////////////////////////////////////
    
    Mouse mouse;
    
    mouse.SetBrand("NoName");
    mouse.SetModel("NoName8000ZX");
    mouse.SetColor("Black");
    mouse.SetWireless(true);
    mouse.SetLeftButton(false);
    mouse.SetRightButton(true);
    mouse.SetScrol(true);

    mouse.Press_left_button();
    mouse.Press_right_button();
    mouse.Scrol();
    cout << "\n";
    mouse.MouseInfo();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

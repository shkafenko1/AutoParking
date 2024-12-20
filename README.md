# AutoParking
автопаркинг за ночь

!autoParking: std::string parkingName, int capacity,  int hourlyPrice, List<parkingSpot>, List<List<Employees>>

parkingSpot: int placeId, Vehicle* vehicle

vehicle: std::string number, Visitor* visitor, std::string color, std::string model
 - car: int boardType(enum)"kuzov"
 - cargo: int height, int width
 - moto: bool hasSideCar

person: std::string name, std::string phoneNumber
 - employees: float salary, int shift(enum)"smena"
 - - manager: int teamSize
 - - security: std::string equipment
 - - cleaner: bool canCleanCar
 - visitors: int hoursPaid, std::string parkDate
 - - guest: int hoursParked
 - - client: int daysParked

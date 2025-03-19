#include <iostream>
#include <string>
using namespace std;
int main() {
    string foodItem;
    int quantity;
    int totalCalories = 0;
    cout << "Welcome to the Calorie Calculator!" << endl;
    cout << "Enter 'exit' as the food item to stop the program." << endl;
    while (true) {
        cout << "Enter food item (e.g., apple, banana, egg): ";
        cin >> foodItem;
        if (foodItem == "exit") {
            break;
        }
        cout << "Enter quantity: ";
        cin >> quantity;
        int caloriesPerItem = 0;
        if (foodItem == "apple") {
            caloriesPerItem = 95;
        } else if (foodItem == "banana") {
            caloriesPerItem = 105;
        } else if (foodItem == "egg") {
            caloriesPerItem = 78;
        } else if (foodItem == "carrot") {
            caloriesPerItem = 25;
        } else {
            cout << "Food item not recognized." << endl;
            continue;  }
        int totalFoodCalories = caloriesPerItem * quantity;
        cout << "Calories in " << quantity << " " << foodItem << "(s): " << totalFoodCalories << endl;
        totalCalories += totalFoodCalories;
    }
    cout << "Total caloric intake: " << totalCalories << " calories." << endl;
    return 0;
}

#include <iostream>
#include <vector>

#include "Action.h"
#include "ActionFactory.h"

using namespace std;


int main(void) {
    vector<Action*> roles;
    int choice;

    ActionFactory::GetInstance()->Init();

    while (true)
    {
        cout << "(1)Batman (2)Superman (3)Ironman (0)Go: ";
        cin >> choice;
        if (choice == 0)
            break;
        roles.push_back(
            ActionFactory::GetInstance()->BuildAction(choice));
    }

    for (int i = 0; i < roles.size(); ++i)
        std::cout << roles[i]->Iam() << std::endl;
    for (int i = 0; i < roles.size(); ++i)
        delete roles[i];
    return 0;
}


#include "State.h"
#include "Contract.h"
#include "Subscriber.h"

#include<iostream>
#include<string>

using namespace std;

int main() {

    //cout << top << ═ << ╬ << ═ <<endl << __ << ╩;
    bool cont_contract = true;
    while (cont_contract) {

        cout << "Contract name:\t";
        string contract_name;
        //cin >> contract_name;
        getline(cin >> ws, contract_name);
        cout << contract_name << endl;

        int num_parties;
        cout << "Number of Parties:\t";
        cin >> num_parties;
        cout << num_parties << endl;

        Subscriber* sub = new Subscriber();
        Contract* loop_contract = new Contract(num_parties, contract_name, sub);

        bool cont_loop = true;
        while (cont_loop) {
            string add_cond;

        add_another:
            cout << "Add condition Y/N:\t";
            cin >> add_cond;
            //getline(cin, add_cond);
            cout << add_cond << endl;

            //while (add_cond != "Y" || add_cond != "y" || add_cond != "N" || add_cond != "n") {
            //    cout << "Add condition Y/N:\t";
            //    cin >> add_cond;
            //}

            while (add_cond == "Y" || add_cond == "y") {
                string condition;
                cout << "Condition?\t";
                //cin >> condition;
                getline(cin >> ws, condition);
                loop_contract->addCondition(condition);
                cout << condition << endl;

                cout << loop_contract->toString();
                cout << "Do you wish to continue adding conditions (y or n)?\t";
                cin >> add_cond;
                //getline(cin, add_cond);
                cout << add_cond << endl;

            }

            if (add_cond == "N" || add_cond == "n") {
                string remove;
                cout << "Remove Condition? Y/N:\t";
                //getline(cin >> ws, remove);
                cin >> remove;
                cout << remove << endl;
                while (remove == "Y" || remove == "y") {
                    cout << "Which condition do you want removed?" << endl;
                    string condition_to_remove;
                    //cin >> condition_to_remove;
                    getline(cin >> ws, condition_to_remove);
                    cout << condition_to_remove << endl;
                    loop_contract->removeCondition(condition_to_remove);
                    cout << loop_contract->toString();
                    cout << "Would you like to remove another? Y/N:\t";
                    cin >> remove;
                    //getline(cin, remove);
                    cout << remove << endl;
                }

                string accept;
                cout << "Accept Y/N:\t";
                cin >> accept;
                //getline(cin, accept);
                cout << accept << endl;
                int count = 0;
                while (accept == "Y" || accept == "y") {
                    loop_contract->accept();
                    cout << endl << loop_contract->toString() << endl;
                    cout << "Accept Y/N:\t";
                    cin >> accept;
                    //getline(cin, accept);
                    cout << accept << endl;
                    count++;
                    if (count == num_parties)
                        break;
                }
                if (accept == "N" || accept == "n") {
                    goto add_another;
                }
            }
            string complete;
            cout << "Complete contract? Y/N:\t";
            cin >> complete;
            //getline(cin, complete);
            cout << complete << endl;
            int complete_count = 0;
            while (complete == "Y" || complete == "y") {
                loop_contract->complete();
                cout << endl << loop_contract->toString() << endl;
                cout << "Complete contract? Y/N:\t";
                cin >> complete;
                //getline(cin, complete);
                cout << complete << endl;

                while (complete == "N" || complete == "n") {
                    cout << "Complete contract? Y/N:\t";
                    cin >> complete;
                    //getline(cin, complete);
                }
                complete_count++;
                if (complete_count == num_parties) {
                    cout << "Final Contract: " << endl << endl;
                    cout << loop_contract->toString() << endl;
                    break;
                }

            }
            string make_another;
            cout << "Would you like to make another contract? Y/N:\t";
            cin >> make_another;
            //getline(cin, make_another);
            cout << make_another << endl;
            if (make_another == "Y" || make_another == "y") {
                delete loop_contract;
                cont_loop = true;
                cont_contract = true;
                break;
            }
            else if (make_another == "N" || make_another == "n") {
                delete loop_contract;
                cont_loop = false;
                cont_contract = false;
                break;
            }
        }
    }

    return 0;
}
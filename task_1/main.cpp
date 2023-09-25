#include "State.h"
#include "Contract.h"
#include "Subscriber.h"

#include<iostream>
#include<string>

using namespace std;

int main(int argc, const char** argv) {

    //cout << top << ═ << ╬ << ═ <<endl << __ << ╩;
    bool cont_contract = true;
    while (cont_contract) {

        cout << "Contract name:\t";
        string contract_name;
        //cin >> contract_name;
        getline(cin, contract_name);

        int num_parties;
        cout << "Number of Parties:\t";
        //cin >> num_parties;
        string input;
        getline(cin, input);
        num_parties = stoi(input);

        Subscriber* sub = new Subscriber();
        Contract* loop_contract = new Contract(num_parties, contract_name, sub);

        bool cont_loop = true;
        while (cont_loop) {
            string add_cond;

        add_another:
            cout << "Add condition Y/N:\t";
            //cin >> add_cond;
            getline(cin, add_cond);

            //while (add_cond != "Y" || add_cond != "y" || add_cond != "N" || add_cond != "n") {
            //    cout << "Add condition Y/N:\t";
            //    cin >> add_cond;
            //}

            while (add_cond == "Y" || add_cond == "y") {
                string condition;
                cout << "Condition?\t";
                //cin >> condition;
                getline(cin, condition);
                loop_contract->addCondition(condition);

                cout << loop_contract->toString();
                cout << "Do you wish to continue adding conditions (y or n)?\t";
                //cin >> add_cond;
                getline(cin, add_cond);

            }

            if (add_cond == "N" || add_cond == "n") {
                string remove;
                cout << "Remove Condition? Y/N:\t";
                getline(cin, remove);
                while (remove == "Y" || remove == "y") {
                    cout << "Which condition do you want removed?" << endl;
                    string condition_to_remove;
                    getline(cin, condition_to_remove);
                    loop_contract->removeCondition(condition_to_remove);
                    cout << loop_contract->toString();
                    cout << "Would you like to remove another? Y/N:\t";
                    getline(cin, remove);
                }

                string accept;
                cout << "Accept Y/N:\t";
                //cin >> accept;
                getline(cin, accept);
                int count = 0;
                while (accept == "Y" || accept == "y") {
                    loop_contract->accept();
                    cout << endl << loop_contract->toString() << endl;
                    cout << "Accept Y/N:\t";
                    //cin >> accept;
                    getline(cin, accept);
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
            //cin >> complete;
            getline(cin, complete);
            int complete_count = 0;
            while (complete == "Y" || complete == "y") {
                loop_contract->complete();
                cout << endl << loop_contract->toString() << endl;
                cout << "Complete contract? Y/N:\t";
                //cin >> complete;
                getline(cin, complete);

                while (complete == "N" || complete == "n") {
                    cout << "Complete contract? Y/N:\t";
                    //cin >> complete;
                    getline(cin, complete);
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
            getline(cin, make_another);
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
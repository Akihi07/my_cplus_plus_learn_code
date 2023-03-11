//
// Created by haohe on 2023/2/13.
//

#include "iostream"
#include "string"
#include "Sales_data.h"

void read_sales_data(Sales_data *data){
    double price = 0.0;
    std::cin >> data->bookNo >> data->units_sold >> price;
    data->revenue = data->units_sold * price;
}

int sum_two_data(Sales_data *data1, Sales_data *data2){
    if(data1->bookNo == data2->bookNo){
        unsigned totalCnt = data1->units_sold + data2->units_sold;
        double totalRevenue = data1->revenue + data2->revenue;

        // print ISBN, total sold, total revenue
        std::cout << data1->bookNo << " " << totalCnt << " " << totalRevenue << std::endl;

        // print price per book
        if (totalCnt != 0){
            std::cout << "average price per book: " << totalRevenue/totalCnt << std::endl;
        } else{
            std::cout << "total sales number is 0" << std::endl;
        }

        // return 0 indicates success
        return 0;
    } else {
        // transactions weren't for the same ISBN
        std::cout << "input data must have same ISBN" << std::endl;
        // indicates failure
        return -1;
    }
}

int main()
{
    Sales_data data1, data2;

    // double price = 0.0;
    // we define price in functions

    read_sales_data(&data1);

    read_sales_data(&data2);

    sum_two_data(&data1, &data2);


}

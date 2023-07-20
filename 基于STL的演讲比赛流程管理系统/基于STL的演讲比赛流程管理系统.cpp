﻿// 基于STL的演讲比赛流程管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "speechManager.h"
#include <string>

int main()
{
    
    SpeechManager sm;



    cout << sm.m_Speaker.begin()->first << endl;

    //for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {
    //    cout << "选手编号：" << it->first
    //        << " 姓名： " << it->second.m_Name
    //        << " 成绩： " << it->second.m_Score[0] << endl;
    //}


    int choice = 0;



    while (true) {

        sm.show_Menu();

        cout << "请输入您的选择： " << endl;
        cin >> choice; // 接受用户的选项

        switch (choice) {
        case 1:   //开始比赛
            break;
        case 2:   //查看记录
            break;
        case 3:   //清空记录
            break;
        case 0:   //退出系统
            sm.exitSystem();
            break;
        default:
            system("cls");
            break;
        }

    }
    system("pause");
    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

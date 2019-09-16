//
//  AppDelegate.m
//  HairLossMagic
//
//  Created by DoZhui on 2019/9/16.
//  Copyright © 2019 DoZhui. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

/*
 数据结构与算法经常放在一起出现，其中数据结构指的是“一组数据的存储结构”，算法指的是“操作数据的一组方法”。两者的关系是相辅相成的，数据结构是为算法服务的，算法是要作用在特定的数据结构上的。例如具有随机访问属性的数组，就可以用来实现二分查找法了，如果选择链表，二分查找法就不能工作了。
 
 
 效率和资源消耗的度量衡--复杂度分析。（因为我们学习数据结构和算法就是为了研究如何更快、更省资源地处理数据的问题）
 最常用、最基础的20个数据结构与算法，学习他们的：“来历”、“特点”、“适合解决什么问题”和“实际的应用场景”。
 数据结构：数组、链表、栈、队列、散列表、二叉树‘、堆、跳表、图、Tire树
 算法： 递归、排序、二分查找、搜索、哈希算法、贪心算法、分治算法、回溯算法、动态规划、字符串匹配算法
 
 */
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end

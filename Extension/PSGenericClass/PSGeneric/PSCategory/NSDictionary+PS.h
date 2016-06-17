//
//  NSDictionary+PS.h
//  PSGenericClass
//
//  Created by Ryan_Man on 16/6/14.
//  Copyright © 2016年 Ryan_Man. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSDictionary (PS)
/**
 *   将字典转化成 二进制数据
 *
 *  @return  二进制数据
 */
-(NSData*)toJsonData;
/**
 *  将字典转化成 JSON字符串
 *
 *  @return JSON字符串
 */
-(NSString*)toJsonString;

@end

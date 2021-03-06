//
//  ShopCarDetailModel.h
//  ShopCarDemo
//
//  Created by PanChuang on 16/9/20.
//  Copyright © 2016年 PanChuang. All rights reserved.
//
//
//                            _oo0oo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                           O\  =  /O
//                        ____/`---'\____
//                      .'  \\|     |//  `.
//                     /  \\|||  :  |||//  \
//                    /  _||||| -:- |||||-  \
//                    |   | \\\  -  /// |   |
//                    | \_|  ''\---/''  |   |
//                    \  .-\__  `-`  ___/-. /
//                   ___`. .'  /--.--\  `. . __
//                ."" '<  `.___\_<|>_/___.'  >'"".
//              | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//              \  \ `-.   \_ __\ /__ _/   .-` /  /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？
//
//
//

#import <Foundation/Foundation.h>

@class CarDetailModel;

@interface ShopCarDetailModel : NSObject<NSCoding>
/** 商店id */
@property (nonatomic, copy) NSString *storeId;
/** 商店名字 */
@property (nonatomic, copy) NSString *storeName;
/** 购物车商品详情 */
@property (nonatomic, copy) NSArray  <CarDetailModel *> *goodsDetails;
/** 记录选中状态 */
@property (nonatomic, assign) BOOL selectState;
/** 记录编辑按钮的状态 */
@property (nonatomic, assign) BOOL editState;
@end

@interface CarDetailModel : NSObject<NSCoding>
/** 商品数量 */
@property (nonatomic, copy) NSString *count;
/** 商品价格 */
@property (nonatomic, copy) NSString *detaileprice;
/** 商品详情id */
@property (nonatomic, copy) NSString *goodsDetailId;
/** 商品id */
@property (nonatomic, copy) NSString *goodsId;
/** 商品名称 */
@property (nonatomic, copy) NSString *goodsName;
/** 商品图片 */
@property (nonatomic, copy) NSString *picUrl;
/** 购物车id */
@property (nonatomic, copy) NSString *shoppingCartId;
/** 商品规格 */
@property (nonatomic, copy) NSString *specification;
/** 库存 */
@property (nonatomic, copy) NSString *stock;
/** 记录选中状态 */
@property (nonatomic, assign) BOOL selectState;
/** 记录删除按钮状态 */
@property (nonatomic, assign) BOOL deleteBtnState;
/** 记录单元格的编辑状态 */
@property (nonatomic, assign) BOOL cellEditState;
@end

//
//  HRLogger.h
//  Pods
//
//  Created by daeung Kim on 2017. 2. 16..
//
//

#ifndef HRLogger_h
#define HRLogger_h

#ifdef DEBUG
#   define GZLogFunc(format,...)    NSLog(@"%s(%d) " format,__PRETTY_FUNCTION__,__LINE__,__VA_ARGS__)
#   define GZLogFunc0()             GZLogFunc(@"%@",@"")
#   define GZLogFunc1(a)            GZLogFunc(@"%@",a)
#   define GZLogLine(a)             do{GZLogFunc(@"%s",#a); a;}while(0)
#   define GZLogReturn(a)           do{GZLogFunc(@"return %s: %d", #a, a); return a;}while(0)
#   define GZLogCGRect(rect)        GZLogFunc(@"%s: %@",#rect,NSStringFromCGRect(rect))
#   define GZLogCGSize(size)        GZLogFunc(@"%s: %@",#size,NSStringFromCGSize(size))
#   define GZLogCGPoint(point)      GZLogFunc(@"%s: %@",#point,NSStringFromCGPoint(point))
#   define GZLogUIEdgeInsets(insets)      GZLogFunc(@"%s: %@",#insets,NSStringFromUIEdgeInsets(insets))
#   define GZLogSeperator()         NSLog(@"===================");
#else
#   define GZLogFunc(format,...)
#   define GZLogFunc0()
#   define GZLogFunc1(a)
#   define GZLogLine(a) a
#   define GZLogReturn(a) return a
#   define GZLogCGRect(rect)
#   define GZLogCGSize(size)
#   define GZLogCGPoint(point)
#   define GZLogUIEdgeInsets(insets)
#   define GZLogSeperator()
#endif


#endif /* HRLogger_h */

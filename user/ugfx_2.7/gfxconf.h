/**
 * This file has a different license to the rest of the uGFX system.
 * You can copy, modify and distribute this file as you see fit.
 * You do not need to publish your source modifications to this file.
 * The only thing you are not permitted to do is to relicense it
 * under a different license.
 */

/**
 * Copy this file into your project directory and rename it as gfxconf.h
 * Edit your copy to turn on the uGFX features you want to use.
 * The values below are the defaults.
 *
 * Only remove the comments from lines where you want to change the
 * default value. This allows definitions to be included from
 * driver makefiles when required and provides the best future
 * compatibility for your project.
 *
 * Please use spaces instead of tabs in this file.
 */

#ifndef _GFXCONF_H
#define _GFXCONF_H


///////////////////////////////////////////////////////////////////////////
// GOS - One of these must be defined, preferably in your Makefile       //
///////////////////////////////////////////////////////////////////////////
#define GFX_USE_OS_CHIBIOS                           FALSE
#define GFX_USE_OS_FREERTOS                          TRUE
#define GFX_FREERTOS_USE_TRACE                       FALSE
#define GFX_USE_OS_CMSIS                             FALSE
#define GFX_USE_OS_KEIL                              FLASE
#define GFX_USE_OS_WIN32                             FALSE
#define GFX_USE_OS_LINUX                             FALSE
#define GFX_USE_OS_OSX                               FALSE
#define GFX_USE_OS_ECOS                              FALSE
#define GFX_USE_OS_RAWRTOS                           FALSE
#define GFX_USE_OS_RAW32                             FALSE
//    #define INTERRUPTS_OFF()                         optional_code
//    #define INTERRUPTS_ON()                          optional_code

// Options that (should where relevant) apply to all operating systems
//    #define GFX_COMPILER                             GFX_COMPILER_KEIL
    #define GFX_CPU                                  GFX_CPU_CORTEX_M3
	#define GFX_CPU_ENDIAN                           GFX_CPU_ENDIAN_LITTLE
    #define GFX_OS_HEAP_SIZE                         20480/2
    #define GFX_OS_NO_INIT                           TRUE
    #define GFX_OS_INIT_NO_WARNING                   TRUE
//    #define GFX_OS_EXTRA_INIT_FUNCTION               myOSInitRoutine
//    #define GFX_OS_EXTRA_DEINIT_FUNCTION             myOSDeInitRoutine


/********************************************************/
/* GDISP stuff                                          */
/********************************************************/
#define GFX_USE_GDISP TRUE


#define GDISP_HARDWARE_STREAM_POS               FALSE
#define GDISP_NEED_CONTROL                      TRUE
#define GDISP_NEED_VALIDATION                   TRUE
#define GDISP_NEED_CLIP                         TRUE
#define GDISP_NEED_ARC                          FALSE
#define GDISP_NEED_CONVEX_POLYGON               TRUE
#define GDISP_NEED_IMAGE                        FALSE
#define GDISP_NEED_STARTUP_LOGO                 FALSE
#define GDISP_NEED_CIRCLE                       FALSE//TRUE
#define GDISP_NEED_MULTITHREAD                  TRUE
#define GDISP_DEFAULT_ORIENTATION               GDISP_ROTATE_LANDSCAPE
#define GDISP_STARTUP_COLOR                     Blue


//#define GDISP_SCREEN_HEIGHT		                240
//#define GDISP_SCREEN_WIDTH		                320
//#define GDISP_INITIAL_CONTRAST	                50
//#define GDISP_INITIAL_BACKLIGHT	                100
//#define GDISP_USE_DMA			                FALSE
//#define GDISP_NO_DMA_FROM_STACK	                FALSE


/********************************************************/
/* Font stuff                                           */
/********************************************************/
#define GDISP_NEED_TEXT                         TRUE
#define GDISP_NEED_ANTIALIAS                    FALSE
#define GDISP_NEED_TEXT_KERNING                 FALSE
#define GDISP_NEED_UTF8                         FALSE
#define GDISP_INCLUDE_FONT_DEJAVUSANS20_AA      TRUE


/********************************************************/
/* GWIN stuff                                           */
/********************************************************/
#define GFX_USE_GWIN                            TRUE

#define GWIN_FOCUS_HIGHLIGHT_WIDTH              0

#define GWIN_NEED_WINDOWMANAGER                 TRUE
    #define GWIN_REDRAW_IMMEDIATE               TRUE
    #define GWIN_REDRAW_SINGLEOP                TRUE

#define GWIN_NEED_WIDGET                        TRUE
    #define GWIN_NEED_LABEL                     TRUE
    #define GWIN_NEED_CHECKBOX                  FALSE//TRUE
    #define GWIN_NEED_BUTTON                    TRUE
        #define GWIN_BUTTON_LAZY_RELEASE        FALSE
    #define GWIN_NEED_RADIO                     FALSE//TRUE
    #define GWIN_NEED_SLIDER                    FALSE//TRUE
    #define GWIN_NEED_LIST                      FALSE//TRUE
        #define GWIN_NEED_LIST_IMAGES           FALSE

    #define GWIN_NEED_KEYBOARD                  FALSE
    #define GWIN_NEED_TEXTEDIT                  FALSE
#define GWIN_NEED_CONTAINERS                    TRUE
    #define GWIN_NEED_CONTAINER                 TRUE
    #define GWIN_NEED_FRAME                     FALSE
    #define GWIN_NEED_TABSET                    FALSE


/********************************************************/
/* GTIMER stuff                                         */
/********************************************************/
#define GFX_DISPLAY_RULE_WARNINGS               FALSE
#define GFX_USE_GTIMER                          FALSE//TRUE

#define GTIMER_THREAD_PRIORITY                  NORMAL_PRIORITY
#define GTIMER_THREAD_WORKAREA_SIZE             2048


/********************************************************/
/* GINPUT stuff                                         */
/********************************************************/
#define GFX_USE_GINPUT                          TRUE

#define GINPUT_NEED_MOUSE                       TRUE
#define GINPUT_TOUCH_USER_CALIBRATION_LOAD      TRUE
#define GINPUT_TOUCH_USER_CALIBRATION_SAVE      TRUE
#define GINPUT_MOUSE_MAX_CALIBRATION_ERROR      TRUE


/********************************************************/
/* GEVENT stuff                                         */
/********************************************************/
#define GFX_USE_GEVENT                          TRUE

#define GEVENT_ASSERT_NO_RESOURCE               FALSE
#define GEVENT_MAXIMUM_SIZE                     32
#define GEVENT_MAX_SOURCE_LISTENERS             32


/********************************************************/
/* GEVENT stuff                                         */
/********************************************************/
#define GFX_USE_GQUEUE                          TRUE

#define GQUEUE_NEED_ASYNC                       TRUE


/********************************************************/
/* GFILE stuff                                          */
/********************************************************/
#define GFX_USE_GFILE                           FALSE

#define GFILE_NEED_NATIVEFS                     FALSE
#define GFILE_NEED_ROMFS                        TRUE


#endif /* _GFXCONF_H */

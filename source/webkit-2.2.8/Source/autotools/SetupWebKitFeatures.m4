AH_TOP([
#ifndef __AUTOTOOLSCONFIG_H__
#define __AUTOTOOLSCONFIG_H__ 1
])

# This adds the include line to the bottom of the autoconfig header.
AH_BOTTOM([
#include "WebKitFeatures.h"
#endif // __AUTOTOOLSCONFIG_H__
])

CONFIGURABLE_FEATURE_DEFINES=

if test "$enable_spellcheck" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SPELLCHECK=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SPELLCHECK=0"
fi

if test "$enable_gamepad" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_GAMEPAD=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_GAMEPAD=0"
fi

if test "$enable_video" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_VIDEO=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_VIDEO=0"
fi

if test "$enable_css_shaders" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_CSS_SHADERS=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_CSS_SHADERS=0"
fi

if test "$enable_css_filters" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_CSS_FILTERS=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_CSS_FILTERS=0"
fi

if test "$enable_geolocation" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_GEOLOCATION=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_GEOLOCATION=0"
fi

if test "$enable_svg" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SVG=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SVG=0"
fi

if test "$enable_svg_fonts" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SVG_FONTS=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_SVG_FONTS=0"
fi

if test "$enable_webgl" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_WEBGL=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_WEBGL=0"
fi

if test "$enable_accelerated_compositing" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_3D_RENDERING=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_3D_RENDERING=0"
fi

if test "$enable_accelerated_canvas" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_ACCELERATED_2D_CANVAS=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_ACCELERATED_2D_CANVAS=0"
fi

if test "$enable_web_audio" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_WEB_AUDIO=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_WEB_AUDIO=0"
fi

if test "$enable_battery_status" = "yes"; then
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_BATTERY_STATUS=1"
else
    CONFIGURABLE_FEATURE_DEFINES="$CONFIGURABLE_FEATURE_DEFINES ENABLE_BATTERY_STATUS=0"
fi

# This list of features represents those selected for release builds.  If you are
# adding a new or unstable feature, you should mark it disabled here. We need to run
# this command now rather than use AC_CONFIG_COMMANDS because automake rules depend
# on the output file (WebKitFeatures.txt).
$srcdir/Tools/gtk/generate-feature-defines-files $CONFIGURABLE_FEATURE_DEFINES \
    ENABLE_BLOB=1 \
    ENABLE_CANVAS_PATH=0 \
    ENABLE_CANVAS_PROXY=0 \
    ENABLE_CHANNEL_MESSAGING=1 \
    ENABLE_CSP_NEXT=0 \
    ENABLE_CSS3_TEXT=0 \
    ENABLE_CSS_BOX_DECORATION_BREAK=1 \
    ENABLE_CSS_COMPOSITING=0 \
    ENABLE_CSS_DEVICE_ADAPTATION=0 \
    ENABLE_CSS_EXCLUSIONS=1 \
    ENABLE_CSS_IMAGE_ORIENTATION=0 \
    ENABLE_CSS_IMAGE_RESOLUTION=0 \
    ENABLE_CSS_IMAGE_SET=1 \
    ENABLE_CSS_REGIONS=0 \
    ENABLE_CSS_SHAPES=1 \
    ENABLE_CSS_STICKY_POSITION=0 \
    ENABLE_CSS_TRANSFORMS_ANIMATIONS_UNPREFIXED=0 \
    ENABLE_CSS_VARIABLES=0 \
    ENABLE_CSS3_CONDITIONAL_RULES=0 \
    ENABLE_CUSTOM_SCHEME_HANDLER=0 \
    ENABLE_DASHBOARD_SUPPORT=0 \
    ENABLE_DATALIST_ELEMENT=0 \
    ENABLE_DATA_TRANSFER_ITEMS=0 \
    ENABLE_DETAILS_ELEMENT=1 \
    ENABLE_DEVICE_ORIENTATION=0 \
    ENABLE_DIALOG_ELEMENT=0 \
    ENABLE_DIRECTORY_UPLOAD=0 \
    ENABLE_DOM4_EVENTS_CONSTRUCTOR=0 \
    ENABLE_DOWNLOAD_ATTRIBUTE=0 \
    ENABLE_FILE_SYSTEM=0 \
    ENABLE_FILTERS=1 \
    ENABLE_FTPDIR=0 \
    ENABLE_FONT_LOAD_EVENTS=0 \
    ENABLE_FULLSCREEN_API=1 \
    ENABLE_HIGH_DPI_CANVAS=0 \
    ENABLE_ICONDATABASE=1 \
    ENABLE_IFRAME_SEAMLESS=1 \
    ENABLE_INDEXED_DATABASE=0 \
    ENABLE_INPUT_SPEECH=0 \
    ENABLE_INPUT_TYPE_COLOR=0 \
    ENABLE_INPUT_TYPE_DATE=0 \
    ENABLE_INPUT_TYPE_DATETIME_INCOMPLETE=0 \
    ENABLE_INPUT_TYPE_DATETIMELOCAL=0 \
    ENABLE_INPUT_TYPE_MONTH=0 \
    ENABLE_INPUT_TYPE_TIME=0 \
    ENABLE_INPUT_TYPE_WEEK=0 \
    ENABLE_INSPECTOR=1 \
    ENABLE_JAVASCRIPT_DEBUGGER=1 \
    ENABLE_LEGACY_CSS_VENDOR_PREFIXES=0 \
    ENABLE_LEGACY_NOTIFICATIONS=0 \
    ENABLE_LEGACY_VENDOR_PREFIXES=1 \
    ENABLE_LEGACY_WEB_AUDIO=0 \
    ENABLE_LINK_PREFETCH=0 \
    ENABLE_MATHML=0 \
    ENABLE_MEDIA_CAPTURE=0 \
    ENABLE_MEDIA_SOURCE=0 \
    ENABLE_MEDIA_STATISTICS=0 \
    ENABLE_MEDIA_STREAM=0 \
    ENABLE_METER_ELEMENT=1 \
    ENABLE_MHTML=1 \
    ENABLE_MOUSE_CURSOR_SCALE=0 \
    ENABLE_NAVIGATOR_CONTENT_UTILS=0 \
    ENABLE_NETSCAPE_PLUGIN_API=1 \
    ENABLE_NETWORK_INFO=0 \
    ENABLE_NOTIFICATIONS=0 \
    ENABLE_ORIENTATION_EVENTS=0 \
    ENABLE_PAGE_VISIBILITY_API=1 \
    ENABLE_PERFORMANCE_TIMELINE=0 \
    ENABLE_PROGRESS_ELEMENT=1 \
    ENABLE_PROXIMITY_EVENTS=0 \
    ENABLE_QUOTA=0 \
    ENABLE_RESOURCE_TIMING=0 \
    ENABLE_REQUEST_ANIMATION_FRAME=1 \
    ENABLE_SCRIPTED_SPEECH=0 \
    ENABLE_SHADOW_DOM=0 \
    ENABLE_SHARED_WORKERS=1 \
    ENABLE_SMOOTH_SCROLLING=1 \
    ENABLE_SQL_DATABASE=1 \
    ENABLE_SUBPIXEL_LAYOUT=1 \
    ENABLE_STYLE_SCOPED=0 \
    ENABLE_TEMPLATE_ELEMENT=0 \
    ENABLE_TEXT_AUTOSIZING=0 \
    ENABLE_THREADED_HTML_PARSER=0 \
    ENABLE_TOUCH_EVENTS=0 \
    ENABLE_TOUCH_ICON_LOADING=0 \
    ENABLE_USER_TIMING=0 \
    ENABLE_VIBRATION=0 \
    ENABLE_VIDEO_TRACK=0 \
    ENABLE_VIEW_MODE_CSS_MEDIA=1 \
    ENABLE_WEB_SOCKETS=1 \
    ENABLE_WEB_TIMING=1 \
    ENABLE_WORKERS=1 \
    ENABLE_XHR_TIMEOUT=1

dnl AM_WEBKIT_FEATURE_CONDITIONAL
dnl Checks whether the given feature is enabled in the
dnl build that is being configured and sets up equally-named
dnl Automake conditional reflecting the feature status.
dnl
dnl Usage:
dnl AM_WEBKIT_FEATURE_CONDITIONAL([FEATURE])
AC_DEFUN([AM_WEBKIT_FEATURE_CONDITIONAL], [
  AC_PROG_AWK

  grep -qE "($1=1)" WebKitFeatures.txt
  if test $? -eq 0; then
    feature_enabled="yes";
  else
    feature_enabled="no";
  fi

  AM_CONDITIONAL([$1], [test "$feature_enabled" = "yes"])

]) dnl AM_WEBKIT_FEATURE_CONDITIONAL

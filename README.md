# AulddaysDpiHelper
MFC Per-monitor DPI awareness V2 for multi monitors

Windows started limited support of different DPI settings on multi-monitors ever since Windows 8. And the functionality was then enhanced on Windows 10 1703.
Many applications support high DPI scale now, however, they are not automatically multi-monitor dpi aware. In fact, most applications (even those already with high DPI support) would only look well on the "main" display. If moved to a secondary display, the text and images would propably look quite blurry.

![Blurry text on external monitor, even for high dpi aware applications](https://raw.githubusercontent.com/Aulddays/AulddaysDpiHelper/main/text-blurry-multi-monitor.png)

`AulddaysDpiHelper` is
a utility to help applications to handle multi-monitor dpi issues.
That is, to scale screen elements correctly on systems with multiple monitors of
different DPI settings. It:
* Brings support for `Per-monitor DPI awareness V2`
* Is easy to integrate
* Manages and updates the global settings so that window elements render properly on multi-monitors in most cases
* Exposes *advanced API* for fine-grained or complicated requirements
* Built with backward compatibility. The demo app even runs smoothly on WinXP if compiled by proper versions of toolsets.

Try the demo applications for a quick start.

For detailed documentation, please visit:
[Multi-monitor DPI Awareness for MFC on Windows 10](https://dev.aulddays.com/article/mfc-per-monitor-dpi-v2-blurry-text.htm)


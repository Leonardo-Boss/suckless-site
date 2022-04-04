Clamped move
=============
With this patch, tabbed interprets large position numbers as the
largest known position.  This allows `Ctrl-9`, for example, to always
select the rightmost tab, even if there are only 4 tabs.

Download
--------
* [tabbed-move-clamped-20200404-e2ca5f9.diff](tabbed-move-clamped-20200404-e2ca5f9.diff)

Author
------
* Michael Hendricks <michael@ndrix.org>

--- client.c.orig	2016-04-11 19:36:38 UTC
+++ client.c
@@ -17,6 +17,7 @@
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
  
 ******************************************************************************/
+#include "netinet/in.h"
 #include "client.h"
 #include "state.h"
 

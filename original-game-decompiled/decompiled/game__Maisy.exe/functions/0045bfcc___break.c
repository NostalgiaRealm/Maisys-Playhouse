
/* ==== __break @ 0045bfcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bfcc-0045bfcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



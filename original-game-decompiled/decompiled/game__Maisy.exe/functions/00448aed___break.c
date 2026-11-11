
/* ==== __break @ 00448aed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448aed-00448aed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 004178cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178cb-004178cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



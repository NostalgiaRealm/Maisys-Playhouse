
/* ==== __break @ 0041e98e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041e98e-0041e98e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



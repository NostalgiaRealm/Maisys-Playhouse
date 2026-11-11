
/* ==== __break @ 0041036e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041036e-0041036e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



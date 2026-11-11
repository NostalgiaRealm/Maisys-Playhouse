
/* ==== __break @ 1401178e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178e-1401178e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



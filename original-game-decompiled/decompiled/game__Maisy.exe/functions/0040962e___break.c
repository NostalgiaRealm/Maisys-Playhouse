
/* ==== __break @ 0040962e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040962e-0040962e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



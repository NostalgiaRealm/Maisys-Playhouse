
/* ==== __break @ 0041076e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041076e-0041076e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



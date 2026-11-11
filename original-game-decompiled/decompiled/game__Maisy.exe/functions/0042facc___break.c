
/* ==== __break @ 0042facc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042facc-0042facc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



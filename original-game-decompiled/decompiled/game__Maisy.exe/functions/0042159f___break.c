
/* ==== __break @ 0042159f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042159f-0042159f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 0042159a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042159a-0042159a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



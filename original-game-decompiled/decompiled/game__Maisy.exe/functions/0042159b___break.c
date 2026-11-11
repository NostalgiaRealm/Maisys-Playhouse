
/* ==== __break @ 0042159b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042159b-0042159b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



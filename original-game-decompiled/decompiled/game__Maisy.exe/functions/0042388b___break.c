
/* ==== __break @ 0042388b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042388b-0042388b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



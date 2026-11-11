
/* ==== __break @ 0042ad5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad5b-0042ad5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



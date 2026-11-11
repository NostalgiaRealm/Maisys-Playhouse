
/* ==== __break @ 0040854b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040854b-0040854b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



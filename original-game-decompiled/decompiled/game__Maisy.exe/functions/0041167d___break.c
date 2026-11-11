
/* ==== __break @ 0041167d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041167d-0041167d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



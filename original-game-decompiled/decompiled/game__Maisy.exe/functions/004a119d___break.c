
/* ==== __break @ 004a119d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a119d-004a119d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



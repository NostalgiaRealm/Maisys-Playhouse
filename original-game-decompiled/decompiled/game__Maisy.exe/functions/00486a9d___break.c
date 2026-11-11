
/* ==== __break @ 00486a9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486a9d-00486a9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



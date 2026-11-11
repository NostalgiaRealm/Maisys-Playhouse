
/* ==== __break @ 0045aa8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aa8d-0045aa8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



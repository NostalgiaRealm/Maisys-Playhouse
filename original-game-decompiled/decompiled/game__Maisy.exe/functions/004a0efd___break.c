
/* ==== __break @ 004a0efd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0efd-004a0efd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



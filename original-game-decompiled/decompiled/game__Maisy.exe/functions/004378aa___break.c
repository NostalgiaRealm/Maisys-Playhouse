
/* ==== __break @ 004378aa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378aa-004378aa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



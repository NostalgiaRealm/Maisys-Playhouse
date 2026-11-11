
/* ==== __break @ 00417d7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417d7b-00417d7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



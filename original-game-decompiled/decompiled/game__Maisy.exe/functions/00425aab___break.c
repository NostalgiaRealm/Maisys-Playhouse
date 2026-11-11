
/* ==== __break @ 00425aab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425aab-00425aab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



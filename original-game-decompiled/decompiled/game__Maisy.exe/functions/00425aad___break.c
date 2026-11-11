
/* ==== __break @ 00425aad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425aad-00425aad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



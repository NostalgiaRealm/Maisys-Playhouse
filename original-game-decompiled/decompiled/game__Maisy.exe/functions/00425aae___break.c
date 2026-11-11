
/* ==== __break @ 00425aae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425aae-00425aae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



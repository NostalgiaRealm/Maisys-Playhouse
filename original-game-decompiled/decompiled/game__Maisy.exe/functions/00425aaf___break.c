
/* ==== __break @ 00425aaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425aaf-00425aaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* ==== __break @ 004787ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004787ac-004787ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



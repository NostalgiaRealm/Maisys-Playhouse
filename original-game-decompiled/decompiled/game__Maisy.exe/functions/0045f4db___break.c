
/* ==== __break @ 0045f4db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f4db-0045f4db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


